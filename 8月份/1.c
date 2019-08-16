#include <stdio.h>
#define FUNDLEN	50
struct funds
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(double, double);
int main(void)
{
	struct funds stan =
	{
		"Garlic-Melon Bank",
		4032.27,
		"Lucky's Saving and Loan",
		8543.94
	};
	
	printf("Stan has a total")
	return 0;
}
