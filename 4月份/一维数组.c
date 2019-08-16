#include <stdio.h>
int main(void)
{
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int *p = a;
	int i;
	for ( i=0; i<10; i++)
	{
		printf("a[%d]=%-5d ",i,a[i]);
		printf("*(p+%d)=%-5d\n",i, *(p+i));
	}
	return (0);
}
