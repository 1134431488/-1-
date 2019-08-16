#include <stdio.h>

int main()
{
	printf(	"DEC\t HEX\t CHR\n");
	printf(	"-------------------\n");
	for( int i = 0; i < 128; i+=1)
		printf("%d\t %x\t %c\n", i, i, i);
	putchar('\n');

	return 0;
}


