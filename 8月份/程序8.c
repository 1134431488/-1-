#include <stdio.h>
#define ANSWER "Grant"
#define SIZE 40
char *s_gets(char *st, int n)
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
		else
			while(getchar() != '\n')
				continue;
	}
	printf("st:%#X\n", st);
	printf("ret_val:%#X\n", ret_val);
	return ret_val;//ret_val�����ֵ����st��ַ���
}
int main(void)
{
	char try[SIZE];
	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
    while(try != ANSWER)
    {
    	puts("No, that's wrong. Try again.");	//�˴��Ǵ���ĶԱȣ�������strcmp�Ա��ַ���
    	s_gets(try, SIZE);
	}
	puts("That's right!");
	return 0;
}
