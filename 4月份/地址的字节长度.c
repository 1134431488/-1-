#include<stdio.h>
void hs( int *p);
int main(void)
{
	int x[] = {[5]=6};
	hs(&x);
	printf("x�ĵ�ַ���ֽڳ���Ϊ%lu\n",sizeof (x));
 } 
void hs( int *p)
{
	printf("p�ĵ�ַ���ֽڳ���Ϊ%lu\n",sizeof (p));
	printf("int���ֽڳ���Ϊ%lu\n",sizeof (int)); 
    /*ָ��Ѱַ�����ǻ�ȡ��ַ�ĳ��ȣ����ǻ�ȡָ���������͵ĳ���
	 ָ���1��ָ���ֵ��������ָ�����͵Ĵ�С�����ǵ�ַ���ֽڳ���*/
}
