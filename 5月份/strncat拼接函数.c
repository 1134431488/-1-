#include <stdio.h>
#include <string.h> 
#define BUGSIZE 13
int main(void)
{
	char a[13] = "aaa";
	char b[3]  = "ccc";
	int available;
	available = BUGSIZE - strlen(a) - 1; 
	strncat(a,b,available);
	puts(a);
	return 0;
}
