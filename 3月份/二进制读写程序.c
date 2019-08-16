#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char *s_gets(char *st, int n);

int main(void)
{
	FILE *fa, *fs;  //fa pointer destination file， fs pointer source file
	int files = 0;	//append of file number
	char file_app[SLEN];	//destination file name
	char file_src[SLEN];    //source file name
	int ch;

	puts("Enter name of destination file:");    //输入目标文件的名称
	s_gets(file_app, SLEN); 					//传入一个字符指针地址和整数常量81
	if((fa = fopen(file_app, "ab+")) == NULL)    //append open file failure fa ==NULL
	{
		fprintf(stderr, "Can't open %s\n", file_app);   //standard 错误 输出
		exit(EXIT_FAILURE);
	}
	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)  //当参数2位NULL，函数会为自己分配缓冲区，成功返回0,失败非0
	{
		fputs("Can't create output buffer\n", stderr);  //standard 错误 输出
		exit(EXIT_FAILURE);
	}
	puts("Enter name of first source file (empty line to quit):");	//输入第一个源文件的名称(要退出的空行)
	while(s_gets(file_src, SLEN) && file_src[0] != '\0')    //获取源文件(stdin读源文件数据)的路径名称地址
	{
		if(strcmp(file_src, file_app) == 0)  //小于返回负，字符串相等返回0，大于返回正
			fputs("Can't append file to itself\n", stderr);  //无法将文件附加到自身
		else if((fs = fopen(file_src, "rb")) == NULL)    //当执行这里表示strcmp不相等。只读模式打开失败则返回NULL
			fprintf(stderr, "Can't open %s\n", file_src);
		else    //fs文件打开成功的话执行这条语句
		{

			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)  //创建缓冲区成功为0，失败非0
			{
				fputs("Can't create input buffer\n", stderr);  //不能创建输入缓冲区
				continue;   //继续下一次循环
			}
			/*输入一个源文件路径地址，输入地址和目标文件不是同一个文件，打开这个路径文件，接着创建缓冲区
			则执行下面的apppend函数，把源文件数据附加到目标文件
			*/
			append(fs, fa);     //附加，传入源文件流和目标文件流
			if(ferror(fs) != 0) //文件读写错误：返回非0值，文件读写无错误，返回0值
				fprintf(stderr, "Error in reading file %s.\n", file_src);   //读源文件发生错误
            if(feof(fa) != 0)   //文件结束：返回非0值，文件未结束，返回0值
                fprintf(stderr, "Error in writing file %s.\n", file_app);   //写入文件错误
			 fclose(fs);    //关闭这个源文件
			 files++;//记录成功打开源文件的次数
			 printf("File %s appended.\n", file_src);   //输出这个源文件名称
			 puts("Next file (empty line to quit):");   //下一个文件(要退出的空行)
		}

	}
	printf("Done appending. %d files appended.\n", files);
	rewind(fa);//设置文件位置指示器到文件开始处
	printf("%s continue:\n", file_app); //输出目标文件名称
	while((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");   //完成 展现
	fclose(fa); //关闭文件输出流
	
	return 0;
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);  //st存储n-1个字节大小来自键盘的输入
	if(ret_val)
	{
		find = strchr(st, '\n');    //查找换行符
		if(find)                    //find success == 0 / find failure == NULL
			*find = '\0';   		//解引用字符指针find指向位置上的值修改为空字符
		else
			while(getchar() != '\n')    //如果未发现换行符，刷新缓冲区
				continue;               //继续下一次循环
	}
	return ret_val;
}

void append(FILE *source, FILE *dest)   //源文件stdin流，目的地文件stdout流
{
	size_t bytes;
	static char temp[BUFSIZE];  //只分配一次(静态存储期变量，块作用域，无链接)

	while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) //读取源文件4096块char大小数据存储到temp地址
		fwrite(temp, sizeof(char), bytes, dest);  //写入temp地址bytes块char大小数据到目标文件
}
