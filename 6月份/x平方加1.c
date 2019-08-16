#include <stdio.h>
int main(void)
{
	puts("除法：\n");
	printf("正负得负%3d\n", 8 / -4);
	printf("负正得负%3d\n", -8 / 4);
	printf("负负得正%3d\n", -8 / -4);
	printf("正正得正%3d\n", 8 / 4);	
	puts("乘法：\n");
	printf("正负得负%3d\n", 8 * -4);
	printf("负正得负%3d\n", -8 * 4);
	printf("负负得正%3d\n", -8 * -4);
	printf("正正得正%3d\n", 8 * 4);	
	printf("结束\n");
	return 0;
}
