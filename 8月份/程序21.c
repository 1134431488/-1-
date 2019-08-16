#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "656";
	int n;
	
	printf("%#X\n\n", strrchr(s1, '6'));//╢сср╡Иурвж╥Ш
	
	for(n = 0; n < 3; n++)
	{
		printf("%#X\n", &s1[n]);
	}
	
	return 0;
}
