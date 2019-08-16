#include <stdio.h>
void main(void)
{
	int *v;
	int **p;
	int i = 414;
	p = &v;
	printf("p:%#X &v:%#X\n", p, &v);
	*p = &i;
	printf("*p:%#X *&v:%#X v:%#X\n", *p, *&v, v);
	printf("*v:%d **p:%d i:%d\n", *v, **p, i);

	printf("*v:%d", *v);
}
