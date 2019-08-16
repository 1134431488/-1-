#include <stdio.h>
#include <string.h> 
int main(void)
{
	char a[10] = "aaaa";
	char b[5] = "aaaa";
	
	strcat(a, b);
	puts(a);
	return 0;
 } 
