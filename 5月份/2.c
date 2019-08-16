#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// 书上说文件指针实际上是一个结构体指针。fopen()函数对fp这个结构体指针赋值
	// 这引起我的好奇，我想看看他都有那些成员。且值是什么？
	FILE * fp;
	if((fp = fopen("temp.txt", "a+")) == NULL)
	{
		fputs("打开文件失败！\n", stderr);
	}
	char str[10] = {[0] = '\0'};	//指定初始化器
	fgets(str, 10, fp);
	printf("文件原来的内容是:%s\n", str);
	rewind(fp);
	fputs("666", fp);	//输出字符串到文本模式文件流中
	printf("文件现在的内容是:%s\n", str);
	printf("ptr=%s\n cnt=%d\n base=%s\n flag=%d\n file=%d\n charbuf=%d\n bufsiz=%d\n tmpfname=%s\n",
	       fp[0]._ptr,
	       fp[0]._cnt,
	       fp[0]._base,
	       fp[0]._flag,
	       fp[0]._file,
	       fp[0]._charbuf,
	       fp[0]._bufsiz,
	       fp[0]._tmpfname);

	fclose(fp);
//	remove("temp.txt");
	return 0;
}

//	  char *_ptr;
//    int _cnt;
//    char *_base;
//    int _flag;
//    int _file;
//    int _charbuf;
//    int _bufsiz;
//    char *_tmpfname;
