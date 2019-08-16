#include<stdio.h>
void u(int n){
	printf("n值：%d   地址：%#X\n",n, &n);//十六进制输出地址 
	if(n < 4)
	u(n + 1);
	printf("n值：%d   地址：%#X\n",n, &n);
}
int main(void)
{
	u(1);
	return 0;
}
