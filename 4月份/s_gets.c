#include <stdio.h>
char *s_gets(char *st, int n);
int main(void)
{
	int k = 3;
	char stq[80] = "asdasdasdasd";
	printf("%s", s_gets(stq, k)) ;
	
//	printf("��������stq��ַΪ%#X\n",stq);
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);//fgets()���ص���st�ĵ�ַ
	if(ret_val)//����ret_val != NULL
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	printf("st��ַΪ%#X\n",st);
	return ret_val;//ֻ����ָ���ߴ������ 
}
