#include <stdio.h>
int main(void)
{
	char *sz = "ǰ;�ڰ�";
	printf(sz);
	puts(sz); 
	fputs(sz,stdout);
	while(*sz)
	{
		putchar(*sz++);	
	}
	return 0;
 } 
