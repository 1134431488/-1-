#include <stdio.h>
void report_count(void);
void accumulate(int k);
int count = 0;	//�ļ��������ⲿ���ӣ���̬�洢��

int main(void)
{
	int value;	//�Զ�����
	register int i;	//�Ĵ�������

	printf("Enter a positive integer (0 to quit):");	//����һ����������0���� 
	while(scanf("%d", &value) == 1 && value > 0)	//scanf()�����Զ�����հ��ַ���scanf()�ڲ���һ��ѭ������Կհ��ַ� 
	{
		++count;	//ʹ���ļ����������
		for(i = value; i >= 0; i--)	//����value��5������5 4 3 2 1 0 ��������ӵ���15 
		{
			accumulate(i);
		}
		
		printf("Enter a positive integer (0 to quit):");
	}
	report_count();
	
	return 0;
}

void report_count(void)
{
	printf("Loop executed %d times\n", count);
}
