#include <stdio.h>

void fun(int ** p);

void main(void)
{
	int * v;
	fun(&v);
	printf("%4d %4d %4d\n", *v, *v, *v);
	printf("%4d %4d %4d\n", *v, *v, *v);
}

void fun(int ** p)	//p == &v	则 *p == *&v	则*&v == v 
{
	static int i = 414;

	*p = &i;	//	*p = v 	v是一个一维指针 
}
