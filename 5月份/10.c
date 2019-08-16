#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char * p = "Kill";
	p[0] = 'F';
	printf("Kill");
	printf(" : %s\n", "Kill");
	return 0;
}
