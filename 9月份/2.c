#include <stdio.h>
void ahh(void);
int main(void)
{
	goto a;
	printf("777777");//被跳过的部分

a:
	printf("xxxxxxx");
	return 0;
}
void ahh(void)
{
a:
	printf("66666\n");
	printf("66666\n");
}
