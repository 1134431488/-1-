#include <stdio.h>
int main(void)
{
	int a, b, c;	//b��ַ��a��c֮�䣬����b������۲�a��c�ı仯
	a = 0;
	b = 2;
	c = 0;
	while(a == 0 || b == 0)
	{
		printf("%d\n", b);
		b += 20000000;
	}
	printf("%a=d b=%d\n", a, b);
	return 0;
}
