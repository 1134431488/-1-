#include<stdio.h>
int main(void)
{
	short p[] = {[5]=6};
	double *k = p;//p就是数组一个地址指向地址首元素，前面可以不加& 
	printf("%lu\n",sizeof (short));
	printf("%p\n",p);
	printf("%p\n",p+1); 	
	
	printf("%p\n",k);
	printf("%p\n",k+1); 
 } 
 /*
 上方的代码为了验证不同类型下的指针 是否根据指针它的类型递增存储单元
 
 结论，即便指向short数组指针递增，指针它是根据指针自身的类型而递增存储单元
 
 由此可得，为了正确获取数组地址上的值，要避免不同类型检索值 
 */
