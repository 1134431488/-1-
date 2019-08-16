#include <stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];
	short * pti;
	short index;
	double bills[SIZE];
	double * ptf;
	
	pti = dates;
	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for(index = 0; index < SIZE; index++)
		printf("pointers + %d: %#10X %#15X\n", index, pti + index, ptf + index);
		
	float a = 10.555555;
	int(*f)(int);
	printf("--%d--\n", *&f);
	return 0;
}
