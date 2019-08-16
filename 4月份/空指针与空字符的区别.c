/*空字符占用字节和空指针占用字节*/
#include <stdio.h>
int main(void)
{
	char kzf = '\0'; 
	char *p = NULL;
	printf("%d\n", sizeof(p));//8字节 
	printf("%d\n", sizeof(kzf));//1字节 
	return 0;
 } 
