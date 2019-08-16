#include <stdio.h>
//union variant{
//	int ivalue;
//	char cvalue;
//	double dvalue;
//};
//
//int main(void)
//{
//	union variant var;
//	var.cvalue = 'A';
//	printf("%d\n", var.ivalue);
//	printf("%#X %#X %#X\n",
//	&(var.cvalue), &(var.ivalue), &(var.dvalue));
//
//	return 0;
//}
union var
{
	long int l;
	int i;
};
void main(void)
{
	union var v;
	v.l = 5;
	printf("v.i is %d\n", v.i);
	v.i = 6;
	printf("now v.l is %ld! the address is %#X\n", v.l, &(v.l));
	printf("now v.i is %d! the address is %#X\n", v.i, &(v.i));
}
