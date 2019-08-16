#include <stdio.h>
#include <string.h>
int main(void)
{
	char ID1[] = "123456";
	char ID2[] = "12345";
	printf("%d\n",strncmp(ID1, ID2, 5));
	return 0;
}
