/*Ϊ����ʾĿ��ռ�װ����Դ�ַ��������ᷢ��ʲô���*/
#include <stdio.h>
#include <string.h>
#define SIZE 40
#define TARGSIZE 7
#define LIM 5
char * s_gets(char *st, int n);

int main(void)
{
	char qwords[LIM][TARGSIZE];//5��7��
	char temp[SIZE];//40��
	int i = 0;
	//����ĺ����ǣ�������������� �ַ�����ʱ�򣬶���Ĳ��־���ȥ�� 
	printf("Enter %d words beginning with q:\n", LIM);
	while(i < LIM && s_gets(temp, SIZE))//ѭ��5�θı�i��ֵ and ��ȡ�ַ�����temp����
	{
		if(temp[0] != 'q')//��������temp�ĵ�0λԪ�ز���q����ô����ַ�������ֱ�������i�����е���
			printf("%s doesn't begin with q!\n", temp);
		else//����������temp�ĵ�һ��Ԫ�ؾ���q����ôִ�������������
		{
			strncpy(qwords[i], temp, TARGSIZE - 1);//����������n�汾(qwords��i�е�ַ����q��ͷ��temp���飬7-1)�����7-1����˼��0~6λ��ЧԪ��
			//strncpy�Ĳ���3����˼�Ǵ�temp���������ַ���ָ���ַ���qwords[i]����
			qwords[i][TARGSIZE - 1] = '\0';//qwords��i�У���7-1���±�Ϊ6Ԫ����7���ַ�����Ϊ���ַ���ǰ6�ַ���Ч
			i++;//����i�ĵ���
		}
	}
	puts("Here are the words accepted:");
	for(i = 0; i < LIM; i++)//�������ַ������飬5��
		puts(qwords[i]); 

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
	return ret_val;
}
