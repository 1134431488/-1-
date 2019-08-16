#include <stdio.h>

int main(void)
{
	struct book library;
	//结构体定义式声明放在结构体变量的后面，这是一种错误的写法 
	struct book
	{
		int a;	//声明结构成员，这是一个成员必须以分号结尾 
		int b;
		int c;
	};
	return 0; 
}

