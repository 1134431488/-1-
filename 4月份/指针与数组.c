#include<stdio.h>
int main(void)
{
	int *p;
	int k[] = {[5]=6};//ʹ��C99�����ԣ�ָ����ʼ���� 
	int i;
	for( i=0; i < sizeof(k) / (sizeof k[0]); i++ ) 
	{
		printf("%d\n", k[i]);
	}
	p = k;
	printf("p=%#X &*p=%#X k=%#X &k=%#X\n", p, &(*p), k, &k); 
	/*
		Ѱַָ��õ�������ĵ�ַ�����Ѱַ*p����ó������������ĵ�ַ
		����&*���ȼ���ͬ�����������ϣ�����û������Ҳ�ȶ�*p��ֵ�ٶ�
		��Ѱַ�� 
	*/
	return 0;
 } 
