#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	double *p;
	p = (double *) malloc(1 * sizeof(double));
	*p = 999;
	printf("%#X	%lf\n", p, *p);
	return 0;
}
