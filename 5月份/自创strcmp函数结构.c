#include <stdio.h>
#include <string.h>
int strcmpkk(const char *text1, const char *text2);
int main(void)
{

	printf("����ֵΪ %d\n", strcmpkk("asd", "asd"));

	return 0;
}
int strcmpkk(const char *text1, const char *text2)
{
	int n;
	if(strlen(text1) == strlen(text2))//��Ч�ַ�Ԫ�س���һ��
	{
		while(*text1 == *text2 && *text1 != '\0')//���ַ����жԱ�һ��,��⵽���ַ��˳�
		{
			text1++;//��ʼ�����ַ��� 1
			text2++;//��ʼ�����ַ��� 2

		}
		if(*text1 == *text2)    //��ȷ����� 
		return 0;
		else if(*text1 < *text2)//��ֵС����ֵ���ظ��� -1 
		return -1;
		else					//��ֵ������ֵ�������� 1 
		return 1;
	}
	else
		return -2;//�ַ����Ȳ����ֱ�ӷ���-2 
}
