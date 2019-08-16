#include <stdio.h>
#include <string.h>
int main(void)
{
	const char *pt1 = "asd";
	const char *pt2 = "asd";
	int n;
	n = strcmp(pt1, pt2);
	switch(n)
	{
		case -1 :
			printf("结果为-1\n");
			break;
		case 0 :
			printf("返回值是0\n");
			break;
		case 1 :
			printf("返回值是1\n");
			break;
		default:
			printf("出现一个错误\n");
			break;
	}
	return 0;
}
//字节是一种空间长度，字符是元素，空字符不能看作是一个有效的字符，strlen获取的是有效的字符，空字符是无效的字符 
