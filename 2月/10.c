#include <stdio.h>
#include <stdlib.h>
#define name "回流.txt"

int main(void)
{
	FILE *fp = fopen(name, "w+");
	char c1;
	char c2[] = "abcdefghiz";

	fprintf(fp, "0123456789");
	rewind(fp);

	long n = 0;
	long last;

//	while((c1 = getc(fp)) != EOF && n < sizeof(c2)) //从输出(stdout)流获取字符
//	{
//		printf("position = %d\n", last = ftell(fp) - 1); //查看流的位置
//		ungetc(c2[n], fp); //把字符放回输入(流)中，输入流与输出流分别对应各自的缓冲区
//		n++;
//		fseek(fp, n, SEEK_SET);
//	}

//	fseek(fp, 0L, SEEK_SET); //设置位置
//	printf("position = %d\n", last = ftell(fp));//输出位置
//	c1 = getc(fp);//得到字符
//	printf("c1= %c\n", c1);//输出字符
//	ungetc('a', fp);        //放回字符--------------------重复上面的操作↓
//	fseek(fp, 1L, SEEK_SET); //设置位置
//	printf("position = %d\n", last = ftell(fp));//输出位置
//	c1 = getc(fp);//得到字符
//	printf("c1= %c\n", c1);//输出字符
//	ungetc('b', fp);//放回字符
//	fseek(fp, 3L, SEEK_SET); //设置位置

//	fpos_t pos = (fpos_t)0;
//	fsetpos(fp, &pos);
//	rewind(fp);//操作的是文件，而非缓冲区（貌似如此）
	while((c1 = getc(fp)) != EOF)
		putc(c1, stdout);

	printf("\nreturn result %d\n", ungetc('3', fp));
	while(ungetc('k', fp) != EOF)
		continue;
		
	while((c1 = getc(fp)) != EOF)
		putc(c1, stdout);
	fclose(fp);
//	remove(name);
}
