#include <stdio.h>
#define STLEN 1
int main(void)
{
	char words[STLEN];
	int a = 0;
	puts("Enter a string, please.");
	gets(words);
	printf("%s\n", words);
	puts(words);
	printf("a = %d\n", a);
	puts("Done!");
	return 0;
}
