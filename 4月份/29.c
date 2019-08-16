#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXBKS	10
char * s_gets(char *st, int n);	//函数声明
char * s_gets(char *st, int n)	//函数定义
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);	//从标准输入流（键盘）获取数据
	printf("ret_val = %s\n", ret_val);
	if(ret_val != NULL)
	{
		find = strchr(st, '\n');	//待查找文本， 查找的字符
		if(find != NULL)
			*find = '\0';
		else
			while(getc(stdin) != '\0')	//输入流(缓冲区)中获取字符，并舍去(没有接收getc()函数的返回值)
				continue;
	}
	return ret_val;
}

struct book
{
	char title[MAXTITL];
};

int main(void)
{
	struct book library[MAXBKS];	/* 结构数组 */
	int count = 0;
	int index, filecount;
	FILE * fp;
	int size = sizeof(struct book);	/* 得到结构体类型大小，作为读写文件函数的参数 */

	if((fp = fopen("books.dat", "a+b")) == NULL)	//a+是追加文本到文件末尾的模式，b是二进制。文件定位直接到了文件的末尾，文件不存在则自动创建文件 
		fputs("打开文件失败！\n", stderr), exit(1);
	rewind(fp);	/* 文件位置指示器移动到文件开始字节 0字节的位置 */
//	fseek(fp, 0L, SEEK_SET);	//同上语句  469页
	while(count < MAXBKS && fread(&library[count], size, 1, fp) == 1)	//fread()返回成功读取的项数，一般是参数3。主要是读文件有没有结构体对象 
	{
		//0-9次循环，以二进制模式打开文件 读文件，把读出内容存放到地址：&library[count]，内容大小是size，只读一块，从fp文件流获取输入
		count++;	//用于读取下一个地址 &library[count]
	}
	filecount = count;	//记录读出来的个数
	if(count == MAXBKS)	//如果读出来10个结构体元素
		fputs("文件书籍满10本，结束！\n", stderr), exit(2);
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		//count代表的是文件内现有几本书，如果是小于10，表示还可以继续加记录(record)
		//传入成员title，用于接收标准输入流的字符串，且字符串首元素不为空字符
		count++;
	}
	if(count > 0)
	{
		//书籍数量大于0，说明文件内已经有结构体内容了。
		for(index = 0; index < count; index++)	//遍历结构体数组每个元素的成员内容,同时把结构体写入文件
		{
			printf("%s\n", library[index].title);
			fwrite(&library[filecount], size, count - filecount, fp); //一次性把所有结构对象传入文件
		}
	}
	else
		puts("没有书籍！哈哈。");
	fclose(fp);
	return 0;
}
