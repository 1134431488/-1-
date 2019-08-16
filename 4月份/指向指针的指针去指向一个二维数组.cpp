#include <stdio.h>
int main(void)
{
	int o[4][2] = {1,2,3,4,5,6};
	int **p = &o;
	
	printf("p%#X o%#X\n",p ,&o); 
	printf("p=%d o=%d\n",*p, **o );
	return 0;
 } 
 /*得出结论，无效*/
