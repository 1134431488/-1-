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
	for(alph = b; alph <= alph + rows; alph++)//�����alph�����⣬Ҫѧ���Լ����� 
	{
		printf("%c",alph);
		b = b + 1;
	}
	putchar('\n');
	}
	return 0;
}
