#include <stdio.h>
#include <string.h>
#define SIZE 81
#define LIM 20
#define HALT ""
void stsrt( char *strings [], int num );
char *s_gets( char *st, int n );

int main(void)
{
	char input[LIM][SIZE];//20��81��
	char *ptstr[LIM];//20��
	int ct = 0;
	int k;
	/*****************************************************************************************/
	printf("��ȡ�ַ�������ά����input�����������ǿ��ַ��򲻽��л�ȡ\n����ȡ20�е�����\n");
	//     ct < 20  and  ��ȡ���ַ�����input��ÿһ��    and ��ȡ���ַ�����ǰ�е���Ԫ�ز�Ϊ0
	while( ct < LIM && s_gets( input[ct], SIZE ) != NULL && input[ct][0] != '\0')
	{
		ptstr[ct] = input[ct];//ͬʱ��ָ��ȥָ������������Ч�ַ��������ͦ�ؼ��� 
		ct++;
	}
	/*****************************************************************************************/
	printf("��������%d�е��ַ���\n", ct); 
	stsrt(ptstr, ct);
	puts("\n");
	for( k = 0; k < ct; k++ )
		puts( ptstr[k] );
	return 0;
}

void stsrt( char *strings[], int num )//����ָ���ַ�����ָ��ͼ�¼�Ļ�ȡ����num��num�ֿ��Կ������м����ַ��� 
{
	char *temp;//һ��ָ�� 
	int top, seek;//�������� 

	for( top = 0; top < num - 1; top++ )//0 < �ַ������� 
		for( seek = top + 1; seek < num; seek++ )
			if( strcmp( strings[top], strings[seek] ) > 0 )//�ǳ��ؼ���һ�䣬��ֵ������ֵ����1��С�ڷ���-1�����ڷ���0 
			{//�����ֵ������ֵ��������������ô��������ֵ 
				temp = strings[top];//��¼�����ֵ 
				strings[top] = strings[seek];//����ֵ��ֵ�������ֵ 
				strings[seek] = temp;//�Ѽ�¼����ֵ��ֵ����ֵ 
			}
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	char *find;
	ret_val = fgets(st, n, stdin);//��ȡ������Ч���ַ����ŷ���һ����Ч�ĵ�ַ
	if(ret_val)
	{
		find = strchr(st, '\n');//��ȡ������з��ĵ�ַ
		if(find)//����ҵ��򲻷���null
			*find = '\0';//�滻�ɿ��ַ�
	}
	return ret_val;
}
