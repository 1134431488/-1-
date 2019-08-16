#include <stdio.h>
#include <conio.h>
int main(void)
{
	printf("缓冲区大小为%d字节\n", BUFSIZ);   //输出缓冲区大小
	char ch;
	while(ch = getche()) //无须等待换行符即可被putchar使用ch
		putchar(ch);
	return 0;
}
