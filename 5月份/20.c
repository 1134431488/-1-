#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{
	char try[SIZE];
	puts("Who is buried in Greant's tomb?");
	s_gets(try, SIZE);
	while(strcmp(try, ANSWER) != 0)	//�ַ����Ƚϲ����
	{
		puts("No, that's wrong. Try again.");	//��,���Ǵ�ġ�����һ�Ρ�
		s_gets(try, SIZE);	/*��ȡ�µ��ַ���*/
	}
	puts("Tant's right!");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else if(st[i] == '\0')
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
