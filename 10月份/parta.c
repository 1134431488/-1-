#include <stdio.h>
void report_count();    //����ԭ��
void accumulate(int k); //����ԭ��
int count = 0;  //�ļ��������ⲿ����

int main(void)
{
	int value;  //�Զ�����
	register int i; //�Ĵ�������

	printf("����һ��������(0�˳�): ");
	while(scanf("%d", &value) == 1 && value > 0)
	{
		++count;    //ʹ���ļ����������
		for(i = value; i >= 0; i--)		//i = value�����Զ�������ֵ��ֵ���Ĵ�����������������ٶȷ��ʸñ���
			accumulate(i);
		printf("����һ��������(0�˳�): ");
	}
	report_count();

	return 0;
}
void report_count()
{
	printf("ѭ��ִ��%d��\n", count);
}
