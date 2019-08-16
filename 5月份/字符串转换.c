#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIM 30
char * s_gets(char * st, int n);

int main()
{
	char number[LIM];
	char * end;
	long value;

	puts("Enter a number (empty line to quit):");
	while(s_gets(number, LIM) && number[0] != '\0')
	{
		value = strtol(number, &end, 10);	/* 参数3是以十进制转换 */
		printf("value = %ld end = %s *end = %d\n", value, end, *end);
		value = strtol(number, &end, 16);	/* 参数3是以十六进制转换 */
		printf("value = %ld end = %s *end = %d\n", value, end, *end);
		puts("Next number:");
	}
	puts("Bye!\n");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getc(stdin) != '\n')
				continue;
	}
	return ret_val;
}
