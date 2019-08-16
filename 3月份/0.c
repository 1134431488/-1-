#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	//设计1
	int ch;
	FILE * fp;
	fp = fopen("wacky.txt", "r");
	ch = getc(fp);
	while(ch != EOF)
	{
		putchar(ch);
		ch = getc(fp);
	}
	//设计2
	int ch;
	FILE *fp;
	fp = fopen("wacky.txt", "r");
	while((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	//糟糕设计
	int ch;
	FILE *fp;
	fp = fopen("wacky.txt", "r");
	while(ch != EOF)
	{
		ch = getc(fp);
		putchar(ch);
	}
	//设计3
	int ch;
	FILE *fp;
	if(!(fp = fopen("wacky.txt", "r")))
		exit(EXIT_FAILURE);
	do
	{
		ch = getc(fp);
		putchar(ch);
	}
	while(ch != EOF);

	return 0;
}
