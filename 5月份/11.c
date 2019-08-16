#include <stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
	const char * m[LIM] =
	{
		"ADD",
		"MUL",
		"STA",
		"MAI",
		"REA"
	};
	char y[LIM][SLEN] =
	{
		"WAK", "Slee", "MAIL", "WAT", "REA"
	};
	int i;

	puts("Let's compare talents.");
	for(i = 0; i < LIM; i++)
		printf("%-36s %-25s\n", m[i], y[i]);	//每一行的行首
	printf("\n输出%s\n", m[0]);
	printf("\n%zd %zd\n", sizeof(m), sizeof(y));
	 
	return 0;
}
