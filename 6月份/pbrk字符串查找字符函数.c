#include <stdio.h>
#include <string.h>
char *pbrk(const char *cs, const char *ct);
int main(void)
{
	printf("%#X\n",	pbrk("aaa","bcn"));
	return 0;
}
char *pbrk(const char *cs, const char *ct)// ����1��2����ָ��char���� 
{
	const char * sc1, *sc2;//��������ָ��char���͵ı��� 
	for( sc1 = cs; *sc1 != '\0'; ++sc1)//��sc1ָ�븳ֵ��һ���������ж����׵�ַ����Ϊ���ַ���ִ�У�����ִ�У�ÿ��ִ�ж���ַ����1 
	{//����Ҫ����һ������sc1�ǲ���ǰ׺ģʽ������ѭ��������Ÿ���ѭ�������� 
		for( sc2 = ct; *sc2 != '\0'; ++sc2)//��sc2��ֵ����2���ж����׵�ַ��Ϊ���ַ������������2
		{
			if(*sc1 == *sc2)//�Ӳ���1�ĵ�һλԪ�أ��ԱȲ���2������Ԫ�ؽ��б��� 
			{
				return (char *) sc1;
			}
		}
	}
	return NULL;
}
