#include <stdio.h>
static void fun1(void);
static void fun2(void);
int main(void)
{
	int n = 3;
	while(n--)//��Ҫ�ǲ��Թؼ���static�ڲ����ӣ���̬�洢��
	{
		fun1();
		fun2();
		puts("");//͵�����Ļ��з�д��
	}

	return 0;
}
static void fun1(void)
{
	static unsigned int temp = 0;//�˱����Ǻ������ȫ�ֱ����������ڴ˺����п���ʹ��
	temp++;                      //static���ã������Զ��洢������˾�̬�洢���ͣ����ַ�洢��ֵ�����ں�����ʧʱ�ͷ�
	printf("ֵ=%u	��ַ=%#X\n", temp, &temp);//�޷�������ʮ����ת���ַ�%u
}
static void fun2(void)
{
	static unsigned int temp = 0;
	temp++;
	printf("ֵ=%u	��ַ=%#X\n", temp, &temp);
}
