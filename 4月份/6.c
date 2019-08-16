#include <stdio.h>
#include <string.h>
#define MAX 100
char * s_gets(char * st, int n);

int main(void)
{
	char str[MAX];
	
	while(s_gets(str, MAX) != NULL && str[0] != '\0')
	{
		printf("��������� %s\n", str);
	}
	printf("���������ַ����� %s\n", str);
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find != NULL)
			*find = '\0';
	}
	else
		while(getchar() != '\n')
			continue;
	return ret_val;
}
