#include <stdio.h>

int main(void)
{
	extern int temp;	//指示编译器到函数之外找寻这个变量，引用式声明(Referencing Declaration)
	{
		int temp = 10001;
	}
	printf("%d\n", temp);
	return 0;
}

int temp = 999;	//定义式声明（Defining Declaration）在main函数的末尾
