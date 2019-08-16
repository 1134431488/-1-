#include <stdio.h>
char *s_gets(char *st, int n)
{
	char * ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if(ret_val != NULL)
	{
		for(i = 0; st[i] != '\n' && st[i] != '\0'; i++ )
			continue;
		if(st[i] == '\n')
			st[i] = '\0';
		else if(st[i] == '\0')
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
int main(void)
{
	int n = 5;
	char st[10];

	s_gets(st, n);
	fputs(st, stdout);
	return 0;
}
