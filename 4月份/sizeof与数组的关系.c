#include <stdio.h>
int main(void)
{
	int p[] = {[5]=6};
	
	printf("��������ֽڳ���Ϊ��");
	printf("%lu\n",sizeof p);
	printf("����ÿ�������ֽ����ͳ���Ϊ��");
	printf("%lu\n",sizeof (int));
	printf("�����������Ϊ��");
	printf("%lu\n",sizeof (p) / sizeof (int));
}
