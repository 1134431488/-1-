#include <stdio.h>

int main(void)
{
	char str[100] = "";
	while(scanf("%s", str) && *str != '\n')
	{
		break;
	}
	
	if(*str == '\0')
		puts("������ַ�");

	if(*str == '\n')
		puts("������з�");
	return 0;
}
