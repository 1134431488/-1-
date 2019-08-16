#include <stdio.h>
#include <string.h>
int main(void)
{
	const char *s = "aaba";
	printf("strchr返回找到的地址值为:%#X\n\n",strchr( s, 'b') );
	while(*s)//解引用如果为空字符则停止 
	{
		printf("%#X\n",s++);//后缀形式递增输出s静态内存里的字符串字符的地址 
	}
	return 0;
}
