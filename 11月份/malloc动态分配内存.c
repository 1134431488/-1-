#include <stdio.h>
#include <stdlib.h>/*为malloc(),free()函数提供原型*/

int main(void)
{
	double *ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	if(scanf("%d", &max) != 1)/*如果没有成功获取*/
	{
		puts("Number not correctly emter -- bye.");
		exit(EXIT_FAILURE);//异常中止
	}
	ptd = (double *) malloc(max * sizeof(double));
	if(ptd == NULL)/*如果分配内存失败返回一个NULL*/
	{
		puts("Memory allocation failed. Goobye.");
		exit(EXIT_FAILURE);
	}
	/*ptd现在指向有max个元素的数组*/
	puts("Enter the values (q to quit):");
	while(i < max && scanf("%lf", &ptd[i]) == 1)
		++i;
	printf("Here are your %d entries:\n", number = i);
	for(i = 0; i < number; i++)
	{
		printf("%7.2f ", ptd[i]);
		if(i % 7 == 6)//当i为6,6除于7，除数小于被除数，6小于7，余数是它自身
			putchar('\n');
	}
	if(i % 7 != 6)
		putchar('\n');
	puts("Done.");
	free(ptd);
	return 0;
}
