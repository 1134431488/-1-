#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL	40
#define MAXAUTL 40
#define MAXBKS	10	/* 最大图书数量 */
char * s_gets(char * st, int n);
struct book  	/* 建立book模板 */
{
	char 	title[MAXTITL];
	char 	author[MAXAUTL];
	float 	value;
};
int main(void)
{
	struct book library[MAXBKS];	/* 结构数组 */
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);	/* 获取结构类型大小 */
	if ((pbooks = fopen("book.dat", "ab+")) == NULL)
	{
		fputs("无法打开book.dat文件\n", stderr);	/* 标准错误 */
		exit(1);
	}
	rewind;	/* 定位到文件开始 */
	//fread()函数把结构体数组每个元素的地址作为待读入信息存储的空间 
	while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)	//0 - 9, fread()函数返回参数3，参数1是待读入内容存放地址，参数2为大小，参数3为读取的项数，参数是读取的文件流
	{
		if(count == 0)	//第一次循环
			puts("当前图书目录:");
		printf("%s	by %s: $%.2f\n", library[count].title,
		       library[count].author, library[count].value);
		count++;		//这里更新了count的值 
	}
	filecount = count;	//读出的结构数量，文件读出的图书数量 
	if(filecount > 0)
		printf("filecount：%d\n", filecount);
	if(count == MAXBKS)	//如果等于10本书表示满了 
	{
		fputs("book.dat文件已满.", stderr);
		exit(2);
	}
	puts("请增加新书的书名.");
	puts("一行开始处按[enter]键停止.");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL	//如果书籍没有满，则继续读取 
	        && library[count].title[0] != '\0')
	{
		puts("现在输入作者。");
		s_gets(library[count].author, MAXAUTL);
		puts("现在输入值。");
		scanf("%f", &library[count++].value);	//此处count递增 
		while(getchar() != '\n')
			continue;	/* 清理标准输入流 */
		if(count < MAXBKS)
			puts("输入下一个标题。");
	}
	printf("contu = %d\n", count);			//新增的书籍数量 
	printf("filecount = %d\n", filecount);	//之前文件内的书籍数量 
	if (count > 0)
	{
		puts("这是你的书单:");
		for(index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
			       library[index].author, library[index].value);
		fwrite(&library[filecount], size, count - filecount, pbooks);	//数组结构每个元素的首地址作为代写入的内容 
	}
	else
		puts("没有书吗?太糟糕了.\n");
	puts("Bye.\n");
	fclose(pbooks);

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
