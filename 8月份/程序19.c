#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[5] = "123";
	const char s2[] = "456";
	strncat(s1, s2, 1);//Æ´½Ó
	fputs(s1, stdout);
	
	return 0;
}
