#include <stdio.h>
int main(void)
{
	int urn[5] = { 100, 200, 300, 400, 500 };
	int * ptr1, ptr2, ptr3;

	ptr1 = urn;//��һ����ַ��ֵ��ָ�룬ָ����������Ԫ��
	ptr2 = &urn[2];//��һ����ַ��ֵ��ָ�룬ָ���������3��Ԫ��

	printf("pointer value, derefereced pointer, pointer address:\n" );
	printf("ptr1 = %#X, *ptr1 = %d, &ptr1 = %#X\n", ptr1, *ptr1, &ptr1 );//ָ��ֵ��ָ��ֵ�Ľ����ã�ָ��ĵ�ַ

	//ָ��ӷ�
	ptr3 = ptr1 + 4;//����ĵ�5��Ԫ��
	printf("ptr1 + 4 = %#X, *(ptr1 + 4) = %d\n",ptr1 + 4, *(ptr1 + 4) );
	ptr1++;//ָ���2��Ԫ�أ�
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %#X, *ptr1 = %d, &ptr1 = %#X\n", ptr1, *ptr1, &ptr1 );//ָ��ֵ��ָ��ֵ�Ľ����ã�ָ��ĵ�ַ
	ptr2--;//ָ��������ĵ�2��Ԫ��
	printf("\nvalues after --ptr2:\n");
	printf("ptr2 = %#X, *ptr2 = %d, &ptr2 = %#X\n", ptr2, *ptr2, &ptr2 );//ָ��ֵ��ָ��ֵ�Ľ����ã�ָ��ĵ�ַ
	--ptr1;//ָ���˵�1��Ԫ��(����Ԫ��)
	++ptr2;//ָ���˵�3��Ԫ��
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %#X, ptr2 = %#X\n", ptr1, ptr2);
	//һ��ָ���ȥ��һ��ָ��
	return 0;
}
