#include <stdio.h>
#include <stdlib.h>
void function(int** b);
/**
静态内存分配
由系统分配和回收
*/
void main(void)
{
	int* a;							// 定义int类型的一级指针变量iPoint
	
	printf("&a = %#X\n", &a);
	function(&a);
	printf("*iPoint == %d\n",*a);// 100
	printf("a==&i,则a代表的i本身地址在这里消失了：%#X\n", a);
	printf("*iPoint == %d\n",*a);// 0
	printf("*iPoint == %d\n",*a);// 0

	
}
void function(int** b)
{
	printf("b = %#X\n", b);	//b == &a  b等价于&a本身的地址，a的值尚未指向它处 
	int i = 100;	
	*b = &i;						//*b == 于*&a，这里可以理解 *b == a
									//a = &i本身的地址，而a是一个一级指针，对a可以解引用
									//则*a == i 这里主要一点是，a确实指向了i，而非形参指向了i 
	//现在只需要知道*b的地址 = a = &i
	printf("\n*b=%#X &i=%#X\n\n",*b, &i);
	printf("在这个指向过程，b的地址始终是&a的%#X\n\n", b);
}	
