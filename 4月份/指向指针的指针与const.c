#include <stdio.h>
int main(void)
{
	const int **pp2;
	int *p1;
	const int n = 13;
	pp2 = &p1;//����ָ�����&p1��������p1����ζ��pp2 == &p1��*pp2 == p1 
	*pp2 = &n;//���Ͽɵ�*pp2 == p1 ����ôp1������*pp2��p1��һ��ָ�룬��֪������p1 = &n  
	*p1 = 11; //�������Ǹı���const n��ֵ
	printf("*pp2%#X  p1%#X  &n%#X\n", *pp2, p1, &n);
	printf("%d      %d     %d\n", **pp2, *p1, n); 
	return 0;
 } 
 /*������Щ�������δ����ģ�����ζ����C�����п������У����ǻᾯ�棡C++�����оͻ����*/
