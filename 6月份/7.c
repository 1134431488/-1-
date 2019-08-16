#include <stdio.h>
#define LEN 20

struct names
{
	char first[LEN];
	char last[LEN];
};

struct guy
{
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main(void)
{
	struct guy fellow[2] =
	{
		{
			{"Ewen", "Vilard"},
			"grilled salmon",
			"personality coach",
			68112.00
		},
		{
			{"Rodney", "Swillbelly"},
			"tripe",
			"tabloid editor",
			432400.00
		}
	};
	struct guy * him;

	printf("address #1: %#X #2: %#X\n", &fellow[0], fellow);
	printf("address #1: %#X #2: %#X\n", &fellow[0], &fellow[1]);

	him = fellow;
	
	printf("\n\n");
	for(int n = 0; n < 2; n++)
		printf("%s %s %s %s %.2f\n", (him + n)->handle.first, (him + n)->handle.last, (him + n)->favfood, (him + n)->job, (him + n)->income);
		
	printf("\n\n");
	
	for(int n = 0; n < 2; n++)
		printf("%s %s %s %s %.2f\n",(*(him + n)).handle.first, (*(him + n)).handle.last, (*(him + n)).favfood, (*(him + n)).job, (*(him + n)).income);
	
	printf("\n\n");
	
	printf("pointer #1: %#X #2: %#X\n", him, him + 1);
	printf("him->income is $%.2f: (*him).income is $%.2f\n",
	       him->income, (*him).income);
	him++;	/* 指向下一个结构 */
	printf("him-favfood is %s: him->handle.last is %s\n",
	       him->favfood, him->handle.last);

	return 0;
}
