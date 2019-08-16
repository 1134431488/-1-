#include <stdio.h>
int main(void)
{
	int p[] = {[5]=6};
	
	printf("数组的总字节长度为：");
	printf("%lu\n",sizeof p);
	printf("数组每个项数字节类型长度为：");
	printf("%lu\n",sizeof (int));
	printf("数组的总项数为：");
	printf("%lu\n",sizeof (p) / sizeof (int));
}
