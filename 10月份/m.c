#include <stdio.h>
#include <stdlib.h>
extern void srand1(unsigned int x);/*����ʽ�����ⲿ����*/
extern int randx(void);/*����ʽ�����ⲿ����*/

int main(void)
{
	int count;
	unsigned seed;

	printf("Please enter your choice for seed.\n");
	while(scanf("%u", &seed) == 1)/*�ɹ���ȡ����*/
	{
		srand1(seed);/*��ȡ����ֵ�����������Ӻ���*/
		for(count = 0; count < 5; count ++)
			printf("%d\n", randx());
		printf("Please enter next seed(q to quit):\n");
	}
	printf("Done\n");

	return 0;
}
