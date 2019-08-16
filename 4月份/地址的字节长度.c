#include<stdio.h>
void hs( int *p);
int main(void)
{
	int x[] = {[5]=6};
	hs(&x);
	printf("x的地址的字节长度为%lu\n",sizeof (x));
 } 
void hs( int *p)
{
	printf("p的地址的字节长度为%lu\n",sizeof (p));
	printf("int的字节长度为%lu\n",sizeof (int)); 
    /*指针寻址并不是获取地址的长度，而是获取指向对象的类型的长度
	 指针加1，指针的值递增它所指向类型的大小，而非地址的字节长度*/
}
