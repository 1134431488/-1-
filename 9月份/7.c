#include <stdio.h>
int main(void)
{
	int x;
	scanf("%d", &x);
	switch(x)
	{
		case -1:
			printf("-1");
			break;
		case 0:
			printf("0");
			break;
		case 1:
			printf("1");
			break;
		default:
			printf("x������-1,0,1������");
			break;
	}
	return 0;
}
