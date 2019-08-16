#include <stdio.h>
int a = 0;
void func1(void);
void func2(void);
int main(void)
{
	func2();
	return 0;
}
void func1(void)
{
	loop:
		printf("%d", a);
}

void func2(void)
{
	a++;
	if(a < 10) goto loop;
}
