#include <stdio.h>
void stick(double ar[static 5]);
int main(void)
{
	double arr[5] = {0.1, 0.2, 0.3, 0.4, 0.5};
	stick(arr);
	stick(arr);
	return 0;
}
void stick(double ar[static 5])
{
	int n;
	for(n = 0; n < 5; n++)
		printf("%.2lf\n", ar[n]);
}
