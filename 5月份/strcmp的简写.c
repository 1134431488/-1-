#include <stdio.h>
#include <string.h>
int main(void)
{
	const char *pt1 = "asd";
	const char *pt2 = "asd";
	int n;
	n = strcmp(pt1, pt2);
	switch(n)
	{
		case -1 :
			printf("���Ϊ-1\n");
			break;
		case 0 :
			printf("����ֵ��0\n");
			break;
		case 1 :
			printf("����ֵ��1\n");
			break;
		default:
			printf("����һ������\n");
			break;
	}
	return 0;
}
//�ֽ���һ�ֿռ䳤�ȣ��ַ���Ԫ�أ����ַ����ܿ�����һ����Ч���ַ���strlen��ȡ������Ч���ַ������ַ�����Ч���ַ� 
