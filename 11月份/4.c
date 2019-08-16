#include <stdio.h>
int i;
int main(void)
{
	for(i = 1; i <= 3; i++)
	{
		static int sum = 1; //仅声明定义一次，再次被调用不会重新赋值为1，而是使用之前的sum
		sum += i;
		printf("%d\n", sum);
	}
	return 0;
}
