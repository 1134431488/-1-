#include <stdio.h>
#include <stdlib.h>
void function(int** b);
/**
��̬�ڴ����
��ϵͳ����ͻ���
*/
void main(void)
{
	int* a;							// ����int���͵�һ��ָ�����iPoint
	
	printf("&a = %#X\n", &a);
	function(&a);
	printf("*iPoint == %d\n",*a);// 100
	printf("a==&i,��a�����i�����ַ��������ʧ�ˣ�%#X\n", a);
	printf("*iPoint == %d\n",*a);// 0
	printf("*iPoint == %d\n",*a);// 0

	
}
void function(int** b)
{
	printf("b = %#X\n", b);	//b == &a  b�ȼ���&a����ĵ�ַ��a��ֵ��δָ������ 
	int i = 100;	
	*b = &i;						//*b == ��*&a������������ *b == a
									//a = &i����ĵ�ַ����a��һ��һ��ָ�룬��a���Խ�����
									//��*a == i ������Ҫһ���ǣ�aȷʵָ����i�������β�ָ����i 
	//����ֻ��Ҫ֪��*b�ĵ�ַ = a = &i
	printf("\n*b=%#X &i=%#X\n\n",*b, &i);
	printf("�����ָ����̣�b�ĵ�ַʼ����&a��%#X\n\n", b);
}	
