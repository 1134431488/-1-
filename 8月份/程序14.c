#include <stdio.h>//��׼�������
#include <string.h>//�ַ�������
#define SIZE 40//�ַ�������
#define TARGSIZE 7//�ַ�������
#define LIM 5//�ַ�������
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
		else
			while(getchar() != '\n')
				continue;
	}
	printf("st:%#X\n", st);
	printf("ret_val:%#X\n", ret_val);
	return ret_val;
}
int main(void)
{
	char qwords[LIM][TARGSIZE];//5,7
	char temp[SIZE];
	int i = 0;

	printf("����%d���ַ���!\n", LIM);
	while(i < LIM && s_gets(temp, SIZE))
	{
		if(temp[0] != 'q')
			printf("��������q��ͷ���ַ���!\n");
		else
		{
			strncpy(qwords[i], temp, TARGSIZE - 1);
			qwords[i][TARGSIZE - 1] = '\0';//0-4,0-6     ����7-1=6�滻�ɿ��ַ�
			i++;
		}
	}
	for(i = 0; i < LIM; i++)
		puts(qwords[i]);
	return 0;
}

