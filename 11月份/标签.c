#include <stdio.h>

void func(void);
int main(void)
{
	func();
	return 0;
}

void func(void)
{
	int a;
	a = 0;
loop:
	a++;
	if(a < 10) goto loop;
	printf("%d", a );
	/*
	函数作用域：
	            标签本身没有作用域的，只是一个标志点。
	            但是goto本身有限制，只能是当前函数。所以，从这个角度来说，
	            标签的作用域也可以说是当前函数。
	*/
}
