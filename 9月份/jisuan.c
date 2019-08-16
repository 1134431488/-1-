#include <stdio.h>
int main(void)
{
	double l = 554701039;//此值无论是什么，输出的结果57.324841
	double a;
	a = l / (3.14 * l) * 180;
	printf("%lf\n", a);
	return 0;
}
