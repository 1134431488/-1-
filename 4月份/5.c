#include <stdio.h>

int main(void)
{
	char str[100] = "";
	while(scanf("%s", str) && *str != '\n')
	{
		break;
	}
	
	if(*str == '\0')
		puts("Êä³ö¿Õ×Ö·û");

	if(*str == '\n')
		puts("Êä³ö»»ĞĞ·û");
	return 0;
}
