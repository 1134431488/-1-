#include <stdio.h>
#define f 100000	//�ָ��������
int main(void)
{
	int i, a, c;  	//c = �ָ������a = ���ָ��ֵ
	do
	{
		puts("������ָ��*��ֵ(int a)");
		fscanf(stdin, "%d", &a);
		puts("������ָ��*��ֵ(int c)");
		fscanf(stdin, "%d", &c);
		for(i = 1; i <= f && ( i * c) < a; i++)
		{
			printf("a-i*3=%2d ||| ", a - i * c);    //��ֵ�ָ��3�ݣ�ÿ��ռi��С
			printf("i=%d i*%d��=%d��\n", i, c, i * c);
		}
		putchar('\n');
		if(a % i != 0)  //����ֵΪС���ķ���������iֻ����������������һ����������⴦��
		{
			i = i - 1;	//����������ʱ��i��1
			printf("%d(a)���ָ��%d(c)�ݣ�ÿ��Լռ%d(i)\n", a, c, i);	//�ض�С������
		}
		else    		//���û��������i����Ҫ��1
			printf("%d(a)���ָ��%d(c)�ݣ�ÿ��ռ%d(i)\n", a, c, i);
	} while(getc(stdin) != '#');
	return 0;
}
