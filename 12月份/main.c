#include <stdio.h>
int pr;
void hanshu(int k);
int main(void)
{
	printf("输入值：");

	while(scanf("%d", &pr) == 1 && pr > 0)
	{
		for(int n = pr; n >= 0; n--)    //  在结束的时会传入0
			hanshu(n);
		printf("输入值：");
	}

	return 0;
}
