#include <stdio.h>
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
char * s_gets( char *st, int n );					//����һ����������������������

int main ( void )
{
	char input[LIM][SIZE];							//��������һ����ά����
	int ct = 0;										//����һ������ct = 0
	printf("���뵽%d�У�Ϊquit ��ֹͣ��\n",LIM );	//���LIM��ֵ = 10
	while ( ct < LIM && s_gets(input[ct], SIZE ) != NULL &&
	        strcmp(input[ct], STOP ) != 0 )			//ѭ������ ����ct = 0  �����С�� 10  �� ���ú�������ֵ��ΪNULL  �� �Ա������ַ�������� �����ѭ��
	{
		ct++;
	}
	printf( "%d �ַ�������\n", ct );  				//���������ַ������ �� ������10���ַ���������� ����ִ�е��˴�
	return 0;
}
char * s_gets( char * st, int n )					//����һ������
{
	char * ret_val;									//��������һ��ָ�����
	int i = 0;										//������������i = 0
	ret_val = fgets( st, n, stdin );				//��ȡ�ַ�����st�����У���������80 - 1�ַ� ���Ӽ��̻�ȡ
	if ( ret_val )									//���ret_val������NULL
	{
		while ( st[i] != '\n' && st[i] != '\0' )	//ѭ����������Ԫ�ز����ڻ��з�Ҳ�����ڿ��ַ�
			i++;
		if ( st[i] == '\n' )  						//��������������з����滻�ɿ��ַ�
			st[i] = '\0';
		else
			while( getchar() != '\n' )				
													//����������ַ� �� ��ȡ�Ͷ����ַ�
				continue;
	}
	return ret_val;
}
