#include <stdio.h>
#include <math.h>

int main(void)
{
	double y;
	int x, m;
	for(y = 10; y >= -10; y--)
	{
		m = 2.2 * sqrt(100 - y * y);	//�������ֵ * 2.2������ض�С�����ָ���m 

		for(x = 1; x < 30 - m; x++)
			printf(" ");
			
		printf("*");
		for(; x < 30 + m; x++)
			printf(" ");
			
		printf("*\n");
	}
	return 0;
}
