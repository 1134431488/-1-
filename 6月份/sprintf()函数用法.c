#include <stdio.h>
#define MAX 20
char *s_gets(char *st, int n);
int main(void)
{
	char first[MAX];//first[20]
	char last[MAX];//lasr[20]
	char formal[2 * MAX + 10];//formal[2 * 20 + 10 = 50]
	double prize;

	puts("Enter your first name:");
	s_gets(first, MAX);//��ȡ�ַ���������first�У���ȡ����ΪMAX
	puts("Enter your last name:");
	s_gets(last, MAX);
	puts("Enter your prize money:");
	scanf("%lf", &prize);//��ȡһ����������prize���У����õ���lf ����������ʽdouble
	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);//�ַ����洢����formal�У�û������Ļ��� 
	puts(formal);//����洢��formal�����е��ַ��� 

	return 0;
}
char *s_gets(char *st, int n)//����1�ַ�����ָ��st������n 
{
	char *ret_val;//�ַ�����ָ�� 
	int i = 0;//����i 

	ret_val = fgets(st, n, stdin);//�Ӽ���stdin�л�ȡָ��n�������ַ���st��ַ�У����stָ������ǿ��޸� 
	if(ret_val)//�ж�fgets�ķ���ֵ�������ΪNULL��ɹ���ȡ����Ч���ַ��� 
	{
		while(st[i] != '\n' && st[i] != '\0')//��������ַ������ַ����� 
			i++;
		if(st[i] == '\n')//�������з����滻�ɿ��ַ� 
			st[i] = '\0';
		else
			while(getchar() != '\n')//�����ַ�Ҳ���ǻ��з����ǾͲ�ͣ��continue���� 
				continue;//��ת��ѭ���Ŀ�ͷ 
	}
	return ret_val;//������ ��β �������charָ�� 
}
