#include <stdio.h>
int main(void)
{
	struct book
	{
		int a[7];	//声明以分号结尾，即使是结构体内的成员声明也是如此 
		int b;
	};

	struct book library =
	{
		.b = 66,				//指定初始化起可以颠倒初始化的成员位置 
		.a = {[5] = 10},		//在结构体中指定初始化成员，在成员数组中指定初始化数组
		77						//对int b成员第二次初始化，最后的一次赋值覆盖前一次赋值行为 
	};
	
	for(int n = 0; n < 7; n++)
	{
		printf("a[%d] = %d\n", n, library.a[n]);
	}
	printf("b的值为：%d\n", library.b);
	 
	return 0;
}
