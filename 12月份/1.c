#include <stdio.h>
#include <stdlib.h>
int * hs(void);
int main(void)
{
	int * x;

	hs();
	x = hs();
	printf("------------\nmain��\nx[0] = %d\n", *x + 0);
	free(x);
	return 0;
}
/*�ó����ۣ�ÿ�ε���malloc�����´ε��ð������ĺ���֮ǰ��Ҫ��free���ٴε��ã�������mallocԪ�ص�ֵ������ԭ�������pֵ��*/
int * hs(void)
{
	int n = 10;
	int a[n];//�䳤����
	int *p;

	p = (int *)malloc(10 * sizeof(int));
	printf("\nPֵ��ַ��%#X\n", p);
	if(p != NULL)
	{
		printf("p[0] = %d\n", *p);
	}
	printf("a[0] = %d\n", a[0]);

	p[0] = 80;
	a[0] = 99;
	return p;
}
