#include <stdio.h>
#define ROWS 6
int main(void)
{
	int rows;
	char alph, b, c;
	b = 'A';
	alph = b;
	for(rows = 0; rows < ROWS; rows++)
	{
	for(alph = b; alph <= alph + rows; alph++)//这里的alph有问题，要学会自己调试 
	{
		printf("%c",alph);
		b = b + 1;
	}
	putchar('\n');
	}
	return 0;
}
