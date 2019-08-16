#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch[5];
	while(fgets(ch, 5, stdin) != NULL && ch[0] != '\n')//此代码不完善，没有舍去fgets()末尾的换行符 
	{
		printf("ch[0]=[%c]", ch[0]);
		printf("ch[5]=[%c]", ch[5]);
		printf("ch=[%s]", ch);
		putchar('\n');
	}
	puts("fgets()获取字符后在末尾加空字符\n但是当打印输出一个字符串是不会输出空字符"); 
	puts("fputs()就形成了一个假象，貌似把两者字符串拼接了起来，实际上它输出一个字符串的的时候不输出空字符");
//	system("pause");
	return 0;
}
