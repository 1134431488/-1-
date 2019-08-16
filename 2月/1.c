#include <stdio.h>
#include <iso646.h>

int main(void)
{
	char ch;
	puts("输入一个字符任意键结束");
	while ((ch = getc(stdin)) != '#')
	{
		if((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
		{
			ch += 4;
			if(ch > 'Z' and ch <= 'Z' + 4 or ch > 'z')
				ch -= 26;
			printf("'z'=%d 'Z'=%d\n", 'z', 'Z');
			printf("%c\n", ch);
		}
//		while(getc(stdin) != '\n')
//			continue;
	}
	return 0;
}
