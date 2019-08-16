#include <stdio.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
	int ar[4];
};

double sum(const struct funds * );	/*参数是一个指针*/
double sum1(const double, const double);
double sum2(struct funds moolah);	/*参数是一个结构*/

int main(void) {
	struct funds stan = {
		.bank = "Garlic-melon Bank",
		.bankfund = 4032.27,
		.save = "Luncky's Savings and Loan",
		.savefund = 8543.94,
		.ar = {4, 5, 6, 7}
	};
	printf("Stan has a total of $%.2f.\n", sum(&stan));	/* 注意结构变量名不是其地址的别名，必须加上&(取地址运算符) */
	printf("%传入单一值的成员 计算result: %.2f\n", sum1(stan.bankfund, stan.savefund));
	printf("stan.ar = %#X    &stan.ar%#X    &stan.ar[0]%#X\n", stan.ar, &stan.ar, &stan.ar[0]);
	printf("Stan has a total of $%.2f.\n", sum2(stan));
	
	return 0;
}

double sum(const struct funds * money) {
	return (money->bankfund + money->savefund);
}

double sum1(const double a, const double b) {
	return (a + b);
}

double sum2(struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}
