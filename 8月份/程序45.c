#include <stdio.h>
int main(void)
{
	int n = 5;
	double x;
	int *p1 = &n;
	double *pd = &x;
	x = n;
	pd = p1;//不允许这样做
	
	return 0;
}
