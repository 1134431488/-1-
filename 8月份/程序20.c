#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "456";
	char s2[] = "456";
	printf("%d\n", strncmp(s1, s2, 3));//比较是否相同
	
	return 0;
}
