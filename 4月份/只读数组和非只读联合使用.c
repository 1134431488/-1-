#include <stdio.h>
#define SIZE 5
void show_array(const double ar[], int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = { 20.0, 17.66, 8.2, 15.3, 22.22 };
	printf ("ԭʼdip����:\n");
	show_array(dip, SIZE);//��ʾ
	mult_array(dip, SIZE, 2.5);//����
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);//��ʾ
	return 0;
}
/*��ʾ��������ݣ������õ�const*/
void show_array(const double ar[], int n)//��ס����ԭ���붨���ar[]�ȼ���*ar 
{
	int i;
	for ( i=0; i<n; i++)
		printf("%8.3f ",*ar++);
	putchar('\n');
}
/*�������ÿ��Ԫ�ض�������ͬ��ֵ*/
void mult_array(double ar[], int n, double mult)
{
	int i;
	for( i=0; i<n; i++)
	ar[i] *= mult;
}
