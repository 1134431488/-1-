#include <stdio.h>
int main(void)
{
	int a[3][4]={{99,17,8,11},{66,7,8,19},{12,88,7,16}};
	int *p, max;
	printf(" a[0]:%#X\n",a[0]);//a[0]�ȼ���&a[0]
	printf("&a[0]:%#X\n",&a[0]);//&a[0]�ȼ���a[0] 
	p=a[0];
	printf("p:%#X\n",p);
	printf("a[0]+12:%#X\n",a[0]+12);
		
	for ( p=a[0], max=*p; p<a[0]+12; p++)//��ά�����a[0]������һ����ַ�� 
		if ( *p>max )
		max = *p;
	printf("MAX=%d\n",max);
	
	return 0;
}
