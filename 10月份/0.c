#include <stdio.h>
double blocky(double cleo);
double blocky1(double cleo);
int main(void)
{
	blocky1(1);
	puts("");
	for(int i = 0; i < 10; i++)
		printf("i = %d\n", i);
//	printf("i = %d\n", i);  //һ���뿪��forѭ���Ͳ����ٷ��ʿ��ڵ�i��
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
