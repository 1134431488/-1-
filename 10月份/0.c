#include <stdio.h>
double blocky(double cleo);
double blocky1(double cleo);
int main(void)
{
	blocky1(1);
	puts("");
	for(int i = 0; i < 10; i++)
		printf("i = %d\n", i);
//	printf("i = %d\n", i);  //一旦离开了for循环就不能再访问块内的i了
}
double blocky(double cleo)
{
	double patrick = 0.0;
	return patrick;
}

double blocky1(double cleo)
{
	double patrick = 0.0;
	int i;
	for(i = 0; i < 10; i++)
	{
		double q = cleo * i;
		printf("q = %lf\n", q);
		patrick *= q;
	}
	return patrick;
}
