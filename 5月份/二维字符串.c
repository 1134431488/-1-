#include <stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
	const char *p[LIM] =
	{
		"Adding numbers swiftly",
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to the letter",
		"Understanding the Clanguage"
	};
	char a[LIM][SLEN] =
	{
		"AAA",
		"SSS",
		"DDD",
		"FFF",
		"GGG"
	};
	int i = 0;
	for(i = 0; i < LIM; i++)
		printf("%-36s %-25s\n", *(p + i), *(a + i));

	return 0;
}


