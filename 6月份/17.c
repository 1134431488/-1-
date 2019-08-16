#include <stdio.h>
#define FUNDLEN 50

struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(struct funds moolah);	/*参数是一个结构*/

int main(void)
{
	struct funds stan =
	{
		"G",
		4032.27,
		"L",
		8543.94
	};
	
	printf("%#X\n", stan.bank);
	printf("Stan has a total of $%.2f.\n", sum(stan));

	return 0;
}
double sum(struct funds moolah)
{
	printf("%#X\n", moolah.bank);
	return (moolah.bankfund + moolah.savefund);
}
