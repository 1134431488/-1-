#include <stdio.h>
void hs(void);
int main(void)
{
	int a = 180;
	int *p = &a;//a��һ����������һ����ַ����ֵ��p�ǵü�&
	int **m = &p;//ָ��ָ���ָ�� 

	printf("%#X %#X %#X\n",&a, &p, m);//���ߵȼ� 
	printf("%d %d %d\n\n",a, *p, **m);//**m�ڴ˴��ĺ��壬����ȡ��&p�����pֵ(&a),�����ٴ�&aȡ��180 

	hs();
	return 0;
}
void hs(void)
{
	int a = 190;
	int *p = &a;//a��һ����������һ����ַ����ֵ��p�ǵü�&
	int **m = p;//ָ��ָ���ָ��

	printf("%#X %#X %#X\n",&a, p, m);//���ߵȼ� 
	printf("%d %d %d\n\n",a, *p, *m);//*m�ڴ˴��ĺ��壬p��ͬ��&a��mָ�����p����ôm��ͬ��&a��*m=190 

}
