#include <stdio.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char *s_gets(char *, int);

int main(void)
{
	char try[SIZE];
	
	puts("Who is buried in Grant's tomb?");
	s_gets(try, SIZE);
    while(strcmp(try, ANSWER))//����ֵ�������棬Ϊ�������
    {
    	puts("No, that's wrong. Try again.");
    	s_gets(try, SIZE);//ѭ����ȡ�ַ����ٱȽ�
	}
	puts("That's right!");//Ϊ0ѭ����٣���ôΪ0�����
	return 0;
}

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

