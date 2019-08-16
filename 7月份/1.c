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
			"大蒜银行",
			4032.27,
			"幸运的储蓄和贷款",
			8543.94
		},
		{
			"Honest Jack's Bank",
			3620.88,
			"Party Time Savings",
			3802.91
		}
	};	//初始化结构数组花括号末尾以分号结尾

	printf("琼斯一家总共有%.2lf美元。\n", sum(jones, N));	//	对函数赋值结构和一个数字2

	return 0;
}

double sum(const struct funds money [], int n)
{
	double total;	//总数
	int i;

	for(i = 0, total = 0; i < n; i++)
		total += money[i].bankfund + money[i].savefund;

	return (total);
}
