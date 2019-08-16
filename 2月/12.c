#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	// 每个getchar()依次读入一个字符
	while ((c=getchar())!='\n')
	{
		printf("%c",c);  // 按照原样输出
	}


}

