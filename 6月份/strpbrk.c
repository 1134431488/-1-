#include <stdio.h>
#include <string.h>
int main(void)
{
	const char text1[4] = "wsa";
	const char text2[4] = "qas";
	int n = 0;

	while(n < 4)
	{
		printf("Ԫ�أ�%c ��ַ��%#X     Ԫ�أ�%c ��ַ��%#X\n",text1[n], &text1[n], text2[n], &text2[n]);
		n++;
	}	
	printf("strpbrk�����ķ���ֵ%#X\n", strpbrk(text1,text2));
	return 0;
}
/*
Ԫ�أ�w ��ַ��0X62FE40     Ԫ�أ�q ��ַ��0X62FE30
Ԫ�أ�s ��ַ��0X62FE41     Ԫ�أ�a ��ַ��0X62FE31
Ԫ�أ�a ��ַ��0X62FE42     Ԫ�أ�s ��ַ��0X62FE32
Ԫ�أ�  ��ַ��0X62FE43     Ԫ�أ�  ��ַ��0X62FE33
strpbrk�����ķ���ֵ0X62FE41
ʵ����ۣ�����1=s1������2=s2 
 
1.���ص���S1���ַ�'s'�ĵ�ַ
2.��S2�ַ���Ԫ��a��s���ǳ�����s1���еģ�����s1�׸���ƥ����ַ��ĵ�ַ
3.s1��Ԫ��w����s2�ַ����У���s�ַ�Ԫ����s2�ַ����С����Է������s���ַ���ַ
3.strpbrk�ķ���ֵ�Ǵ�s1�з��ص� 
*/
