#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[20] = "111111111111";
	int length = strlen( strcpy(str+2, "Hello World") );
	printf("����ĳ���%d\n", strlen(str) );
	printf("������������ֵ����length %d\n", length);
	printf("%#X\n",str+2);
	printf("%#X\n",strcpy(str+2, "Hello World") );
	return 0;
}
/*������������ֵ�Ƿ��ص�һ�������ĵ�ַ�������ַ����ָ������Ŀ�ʼ��
Ҳ�����������е�ĳһ�ַ���ַ�Ŀ�ʼ*/ 
