#include <stdio.h>
int main(void)
{
	int n = 5;
	double x;
	int *p1 = &n;
	double *pd = &x;
	x = n;
	pd = p1;//������������
	
	return 0;
}
