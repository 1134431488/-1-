#include<stdio.h>
void u(int n){
	printf("nֵ��%d   ��ַ��%#X\n",n, &n);//ʮ�����������ַ 
	if(n < 4)
	u(n + 1);
	printf("nֵ��%d   ��ַ��%#X\n",n, &n);
}
int main(void)
{
	u(1);
	return 0;
}
