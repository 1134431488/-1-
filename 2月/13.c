#include <stdio.h>
void func1(int *m);
int main(void)
{
	int a = 999;
	int *p = &a;    //避免指向一个野指针
	printf("%#X\n", &a);
	printf("%#X\n", p);
	printf("%#X\n", *&p);   //*&p == p 就是这么神奇
	printf("%#X\n", &p);
	func1((int *)&p);
	return 0;
}

void func1(int *m)
{
	printf("%#X\n", m);
}
