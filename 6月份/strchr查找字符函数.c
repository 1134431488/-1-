#include <stdio.h>
#include <string.h>
int main(void)
{
	const char *s = "aaba";
	printf("strchr�����ҵ��ĵ�ֵַΪ:%#X\n\n",strchr( s, 'b') );
	while(*s)//���������Ϊ���ַ���ֹͣ 
	{
		printf("%#X\n",s++);//��׺��ʽ�������s��̬�ڴ�����ַ����ַ��ĵ�ַ 
	}
	return 0;
}
