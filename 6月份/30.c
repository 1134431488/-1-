#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	struct flex
	{
//		int e;
		int d;
		int a;
		double  b;
		double  c;
		double scores[];	//ռ�ã��ֽ� 
	} * pf;
	printf("%d %d\n\n\n", sizeof(*pf), sizeof(struct flex)); 
	pf = malloc(sizeof(struct flex) + 5 * sizeof(double));
	for(int n = 0; n < 5; n++)
	{
		pf->scores[n] = n*2;
	}
	for(int n = 0; n < 5; n++)
	{
		printf("%.2lf\n", 	pf->scores[n]);
	}
	printf("��СΪ%d\n", sizeof(pf->scores[0]));
//	printf("%d\n", sizeof(pf->scores));		//sizeof()�������ܶ������������Ա���С 
//	printf("\naռ%d    averageռ��%d\n", sizeof(pf->a), sizeof(pf->average));
//	printf("��������������Ա�ṹ�Ĵ�С��%d\n", sizeof(*pf)); 		//��������16�ֽ� 
	return 0;
}
