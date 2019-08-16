#include <stdio.h>
#include <stdlib.h>
extern void srand1(unsigned int x);/*引用式声明外部函数*/
extern int randx(void);/*引用式声明外部函数*/

int main(void)
{
	int count;
	unsigned seed;

	printf("Please enter your choice for seed.\n");
	while(scanf("%u", &seed) == 1)/*成功获取项数*/
	{
		srand1(seed);/*获取到的值放入重置种子函数*/
		for(count = 0; count < 5; count ++)
			printf("%d\n", randx());
		printf("Please enter next seed(q to quit):\n");
	}
	printf("Done\n");

	return 0;
}
