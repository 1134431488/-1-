#include <stdio.h>
int main(void)
{
	int urn[5] = { 100, 200, 300, 400, 500 };
	int * ptr1, ptr2, ptr3;

	ptr1 = urn;//把一个地址赋值给指针，指向了数组首元素
	ptr2 = &urn[2];//把一个地址赋值给指针，指向了数组第3个元素

	printf("pointer value, derefereced pointer, pointer address:\n" );
	printf("ptr1 = %#X, *ptr1 = %d, &ptr1 = %#X\n", ptr1, *ptr1, &ptr1 );//指针值，指针值的解引用，指针的地址

	//指针加法
	ptr3 = ptr1 + 4;//数组的第5个元素
	printf("ptr1 + 4 = %#X, *(ptr1 + 4) = %d\n",ptr1 + 4, *(ptr1 + 4) );
	ptr1++;//指向第2个元素；
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %#X, *ptr1 = %d, &ptr1 = %#X\n", ptr1, *ptr1, &ptr1 );//指针值，指针值的解引用，指针的地址
	ptr2--;//指向了数组的第2个元素
	printf("\nvalues after --ptr2:\n");
	printf("ptr2 = %#X, *ptr2 = %d, &ptr2 = %#X\n", ptr2, *ptr2, &ptr2 );//指针值，指针值的解引用，指针的地址
	--ptr1;//指向了第1个元素(即首元素)
	++ptr2;//指向了第3个元素
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %#X, ptr2 = %#X\n", ptr1, ptr2);
	//一个指针减去另一个指针
	return 0;
}
