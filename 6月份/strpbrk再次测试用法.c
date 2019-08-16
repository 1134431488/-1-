/*strpbrk*/ 
#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	const char s1[] = "1a1a1";
	const char s2[] = "aaaaaaa";
	printf("%#X\n", strpbrk(s1, s2));
	putchar('\n');
	for(n=0; n < strlen(s1)+1; n++)
	{
		printf("%#X\n", &s1[n]);
	}
	return 0;
}
