#include <stdio.h>
#include <string.h>
int main(void)
{
	const char s1[] = "666aaa5666";
	const char s2[] = "aaa"; 
	int n;
	printf("%#X\n",strstr(s1, s2));

	for(n = 0; n < strlen(s1)+1; n++)
	{
		printf("%#X\n", &s1[n]);
	}
	return 0;
}


