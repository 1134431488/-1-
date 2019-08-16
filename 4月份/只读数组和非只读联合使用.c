#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
	printf ("原始dip数组:\n");
	show_array(dip, SIZE);//显示
	mult_array(dip, SIZE, 2.5);//倍数
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);//显示
	return 0;
}
/*显示数组的内容，这里用到const*/
void show_array(const double ar[], int n)//记住函数原型与定义的ar[]等价于*ar 
{
	int i;
	for ( i=0; i<n; i++)
		printf("%8.3f ",*ar++);
	putchar('\n');
}
/*把数组的每个元素都乘以相同的值*/
void mult_array(double ar[], int n, double mult)
{
	int i;
	for( i=0; i<n; i++)
	ar[i] *= mult;
}
