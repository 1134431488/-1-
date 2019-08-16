#include <stdio.h>
#define SIZE 2
void csplit(char [], char, char *[50] );

int main(void)
{
	char *p[50];
	int n;
	csplit("文字库.txt", '|', p);
	//for(n = 0; n < 50 && ; n++)
	return 0;
}
void csplit(char string[], char fs, char *p[50])//参数1：文件路径 参数2：用于分割的单个字符
{
	FILE *fp = fopen(string,"r");
	char text[SIZE];
	int n = 0;
	
	while(fgets(text, SIZE, fp))//fgets的特性，参数2 为int 2 只能获取1个字符，末尾自动补全'\0'
	{
		if(text[0] != fs)//不等于传进去来的分隔符
			//fputs(text, stdout);
			*p[n] = text;
	}
	fclose(fp);//关闭文件 
}
