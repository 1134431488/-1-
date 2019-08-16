#include <stdio.h>
#define FUNDLEN 50
#define N 2
struct funds
{
	char 	bank[FUNDLEN];
	double 	bankfund;
	char 	save[FUNDLEN];
	double 	savefund;
};

double sum(const struct funds money [], int n);

int main(void)
{
	struct funds jones[N] =
	{
		{
			"��������",
			4032.27,
			"���˵Ĵ���ʹ���",
			8543.94
		},
		{
			"Honest Jack's Bank",
			3620.88,
			"Party Time Savings",
			3802.91
		}
	};	//��ʼ���ṹ���黨����ĩβ�ԷֺŽ�β

	printf("��˹һ���ܹ���%.2lf��Ԫ��\n", sum(jones, N));	//	�Ժ�����ֵ�ṹ��һ������2

	return 0;
}

double sum(const struct funds money [], int n)
{
	double total;	//����
	int i;

	for(i = 0, total = 0; i < n; i++)
		total += money[i].bankfund + money[i].savefund;

	return (total);
}
