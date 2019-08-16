#define MSG "I'm special"
#include <stdio.h>
int main(void)
{
	char ar[] = MSG;
	const char *pt = MSG;
	printf("address of \"I'm special\": %p \n", "I'm special");
	printf("			address ar: %p\n", ar);
	printf("			address pt: %p\n", pt);
	printf("			address of MSG: %p\n", MSG);
	printf("address of \"I'm special\": %p\n", "I'm special");
	/* pt与MSG地址相同，而ar地址不同 */
	return 0;
}
