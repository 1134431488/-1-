#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_gets(char *st, int n);
int main(void)
{
	char flower[SIZE];
	char addon [] = "����֪����";

	puts("����˭?");
	if(s_gets(flower, SIZE))
	{
		strcat(flower, addon);
		puts(flower);
		puts(addon);
	}
	else
		puts("�ռ䲻����");
	return 0;
}
char * s_gets(char *st, int n)
{
	char *r;
	int i = 0;
	r = fgets(st, n ,stdin);
	if(r)
	{
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return r;
}
