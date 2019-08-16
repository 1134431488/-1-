#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 	10
char * s_gets(char * st, int n);
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main(void)
{
	struct book library[MAXBKS];	//声明一个结构数组，有两个元素
	int count = 0;					//声明一个计数
	int index, filecount;			//声明一个索引和一个文件计数
	FILE * pbooks;					//声明一个文件指针
	int size = sizeof(struct book);	//声明一个结构大小

	if((pbooks = fopen("book.dat", "a+b")) == NULL)		//对文件指针赋值一个文件二进制流
	{
		fputs("Can't open book.dat file\n", stderr);	//标准错误
		exit(1);										//结束程序执行
	}

	rewind(pbooks);										//文件位置指示器回到文件开始处,第0字节的位置
	while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)	//这个数组会接收文件的结构体数组内容，如果有的话 
	{
		//从0到9,10次遍历读数据到结构体数组的首地址，因为读一块数据，成功则返回参数3
		if(count == 0)
			puts("Current contents of book.dat:");
		printf("%s %s %.2f\n", library[count].title,
		       library[count].author, library[count].value);	//打印输出这个结构，检测读出的内容
		count++;	//递增
	}
	filecount = count;	//记录读出的项数
	if(count == MAXBKS)	//如果读出的项数等于10
	{
		fputs("The book.dat file is full.", stderr);	//标准错误
		exit(2);	//结束程序执行
	}

	puts("Please add new book title.");
	puts("Press [enter] at the start of a line to stop.");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL	//获得标题，舍弃换行符
	        && library[count].title[0] != '\0')	//如果为空字符则退出循环
	{
		puts("Now enter the author.");
		s_gets(library[count].author, MAXAUTL);	//获取作者，舍去换行符
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);	//获取一个值 
		while(getchar() != '\n')				//丢弃换行符，scanf残留了一个换行符 
			continue;							//跳到下一次循环开始 
		if(count < MAXBKS)						//如果count仍然小于10 
			puts("Enter the next title.");
	}

	if(count > 0)								//如果上一循环成功地址了count则执行，则表示从filecount索引开始的结构体数组有内容了 
	{
		puts("Here is the list to your books:");
		for(index = 0; index < count; index++)	 
			printf("%s %s %.2f\n", library[index].title,	//因为最开始读了一次文件，所以输出所有内容，也就是最新的结构体内容 
			       library[index].author, library[index].value);
		fwrite(&library[filecount], size, count - filecount, pbooks);	//把结构数组的内容一次性都写进文件，限制数组索引起始与写入个数 
	}
	else
		puts("No books? Too bad.\n");
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
