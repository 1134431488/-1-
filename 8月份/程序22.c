#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "a565";
	char s2[] = "4565";
	int n;
	printf("%#X\n", strpbrk(s1, s2));//�������s1Ԫ��'5'�ĵ�ַ
	for(n = 0; n < 4; n++)
	{
		printf("%#X\n",&s1[n]);//�������s1Ԫ��'5'�ĵ�ַ����麯������ֵ���
	}
	return 0;
 }
