#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[4];
	const char s2[] = "456";
	strncpy(s1, s2, 3);//拷贝
	s1[3] = '\0';    //0-3 3是最后一个元素的下标
	fputs(s1, stdout);
	
	return 0;
}
