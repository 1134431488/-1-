#include <stdio.h>
#include <stdlib.h>

int temp(int *restrict a, int *restrict b);//restrict�����޶�������������*�ŵ��Ҳֻ࣬������ָ��
//int temp_1(int restrict * a, int restrict * b); //����ʾ��
int main(void)
{
	int *p1, *p2;
	
	p1 = (int *) malloc (1 * sizeof(int) );
	p2 = (int *) calloc (1, sizeof(int) );
	puts("Enter two integers"),scanf("%d %d", p1, p2);
	temp(p1, p2);
//	temp_1(p1, p2);//����ĺ���
	free(p1);
	free(p2);

	return 0;
}

int temp(int *restrict a, int *restrict b)
{
	for(int n = 0; n < 4; n++)
		printf("a:%d b:%d\n", *a, *b);
	return 0;
}

//int temp_1(int restrict * a, int restrict * b)//����ʾ��
//{
//	for(int n = 0; n < 4; n++)
//		printf("a:%d b:%d\n", *a, *b);
//	return 0;
//}
