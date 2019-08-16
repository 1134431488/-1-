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
		double scores[];	//占用？字节 
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
	printf("大小为%d\n", sizeof(pf->scores[0]));
//	printf("%d\n", sizeof(pf->scores));		//sizeof()函数不能对伸缩型数组成员求大小 
//	printf("\na占%d    average占用%d\n", sizeof(pf->a), sizeof(pf->average));
//	printf("这个伸缩型数组成员结构的大小是%d\n", sizeof(*pf)); 		//输出结果是16字节 
	return 0;
}
