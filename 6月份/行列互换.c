#include <stdio.h>
int main(void)
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int n,j,m;
	for(n = 0; n < 3; n++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d",a[n][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	for(n = 0; n < 3; n++)
	{
		for(j = n + 1; j < 3; j++)
		{
			m = a[n][j];
			a[n][j] = a[j][n];
			a[j][n] = m;
		}
	}
	for(n = 0; n < 3; n++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d",a[n][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	return 0;
}
