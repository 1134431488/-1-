#include <stdio.h>
int main(void)
{
	int o[4][2] = {0,1,2,3,4,5};
	int *p = &o;//�Ƿ�ָ�� 
	
	printf("%#X %#X\n", p, o);
	return 0;
 } 
