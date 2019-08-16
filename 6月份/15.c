#include <stdio.h>
#define FUNDLEN 50
struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

struct guy
{
	double a;
};
double sum(double, double);

int main(void)
{
	struct funds stan =
	{
		"Grlic-Melon Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};

	printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));

	struct guy test[2] =
	{
		{
			101.0
		},
		{
			102.0
		}
	};
	
	struct guy * him = &test[0];
	
	printf("%.2lf			%.2lf\n", him->a, (1 + him)->a);
	return 0;
}

double sum(double x, double y)
{
	return (x + y);
}
