#include <stdio.h>
#include <stdlib.h>

int temp(int *restrict a, int *restrict b);//restrict类型限定符，须声明在*号的右侧，只能限制指针
//int temp_1(int restrict * a, int restrict * b); //错误示范
int main(void)
{
	int *p1, *p2;
	
	p1 = (int *) malloc (1 * sizeof(int) );
	p2 = (int *) calloc (1, sizeof(int) );
	puts("Enter two integers"),scanf("%d %d", p1, p2);
	temp(p1, p2);
//	temp_1(p1, p2);//错误的函数
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

//int temp_1(int restrict * a, int restrict * b)//错误示范
//{
//	for(int n = 0; n < 4; n++)
//		printf("a:%d b:%d\n", *a, *b);
//	return 0;
//}
