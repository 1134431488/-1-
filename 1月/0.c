/*
stdin
stdout
stderr
*/

#include <stdio.h>
int main(void)
{
	printf("please input the value a:\n");//调用了标准输出流的功能
	//fprintf(stdout, "please input the value a:\n");
	int a;
	scanf("%d", &a);//调用了标准输入流的功能，从键盘获取信息到程序中去
	//fscanf(stdin, "%d", &a);
	//我们要求a>0
	if(a < 0)
	{
		fprintf(stderr, "the value must > 0");//这个值必须 > 0
		return 1;//让电脑知道程序出错，main函数返回值不等于0，则类似EXIT_FAILURE
	}
	return 0;//程序返回0，类似EXIT_SUCCESS
}
