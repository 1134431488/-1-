#include <stdio.h>
#include <stdlib.h>
int temp(int *restrict a, int *restrict b);//restrict�����޶�������������*�ŵ��Ҳֻ࣬������ָ��
int main(void)
{
	int *p1, *p2;
	
	p1 = (int *) malloc (1 * sizeof(int) );
	p2 = (int *) calloc (1, sizeof(int) );
	puts("Enter two integers"),scanf("%d %d", p1, p2);

	int e = temp(p1, p1);//�ƺ�������������
	printf("e = %d\n", e);
	free(p1);
	free(p2);
	return 0;
}

int temp(int *restrict a, int *restrict b)
{
	*b = 2;
	return *a + *b;
}

