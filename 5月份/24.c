#include <stdio.h>
#include <String.h>
#define MAX 20
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
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}

int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;
	
	puts("Enter your first name:");
	s_gets(first, MAX);
	puts("Enter your last name:");
	s_gets(last, MAX);
	puts("Enter your prize money:");
	scanf("%lf", &prize);
	sprintf(formal, "%s %-19s: $%6.2f\n", last, first, prize);
	puts(formal);
	
	return 0;
}
