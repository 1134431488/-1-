#include <stdio.h>
int add(int a, int b);
int main(void)
{
	int a,s,d,f;
	s = 1;
	d = 2;
	if(a = add(s, d) > 2)
		printf("%d\n", a);//若值为1则，表示a = (add(s, d) > 2)等价判断条件
	else
		puts("n");
	printf("%d\n", a);

	if(f = 10 + 100 > 0)
		printf("f=%d", f);

	return 0;
}
int add(int a, int b)
{
	printf("a=%d b=%d %d\n", a, b, a + b);
	return a + b;
}
