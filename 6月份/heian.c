#include <stdio.h>
int main(void)
{
	char *sz = "Ç°Í¾ºÚ°µ";
	printf(sz);
	puts(sz); 
	fputs(sz,stdout);
	while(*sz)
	{
		putchar(*sz++);	
	}
	return 0;
 } 
