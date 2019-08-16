#include<stdio.h>
void interchange(int u, int v);/*声明函数*/
int main(void)
{
	int x = 5, y = 10;
	printf("调用函数前x%d y%d\n",x ,y);
	interchange(x, y);
	printf("调用函数后x%d y%d\n",x ,y);
	return 0; 
}
void interchange(int u, int v)
{
	int temp;
	temp = u;
	u = v;
	v = temp;
}
