#include<stdio.h>
int main(void)
{
	int *p;
	//第一种情况，无地址符进行+1 则递增 它的类型的字节长度
	printf("%p\n",p);
	printf("%p\n",p+1);//它存储的类型是int，递增4个存储单元 
	//第二张情况，带地址符进行+1 则递增 它地址的字节长度
	printf("%p\n",&p);
	printf("%p\n",&p+1);//它地址长度是8，地址8个存储单元 
	return 0;
}
