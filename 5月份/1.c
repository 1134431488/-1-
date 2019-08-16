#include <stdio.h>
int main(void)
{
	char buffer[21];   //20 chars + '\0'
	scanf("%s",buffer);
	puts(buffer);
	return 0;
}
