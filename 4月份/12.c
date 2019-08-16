#include <stdio.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
	int ar[4];
};

double sum(const struct funds * );	/*������һ��ָ��*/
double sum1(const double, const double);
double sum2(struct funds moolah);	/*������һ���ṹ*/

int main(void) {
	struct funds stan = {
		.bank = "Garlic-melon Bank",
		.bankfund = 4032.27,
		.save = "Luncky's Savings and Loan",
		.savefund = 8543.94,
		.ar = {4, 5, 6, 7}
	};
	printf("Stan has a total of $%.2f.\n", sum(&stan));	/* ע��ṹ�������������ַ�ı������������&(ȡ��ַ�����) */
	printf("%���뵥һֵ�ĳ�Ա ����result: %.2f\n", sum1(stan.bankfund, stan.savefund));
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
