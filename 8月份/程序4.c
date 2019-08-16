#define MSG "I m special"
#include <stdio.h>
int main(void)
{
	char ar[] = MSG;
	const char *pt = MSG;

	printf("数组	%#X\n", ar);
	printf("指针	%#X\n", pt);
	printf("源	%#X\n", MSG);
	char *head = "klklk";
	while(*(head) != '\0')
		putchar(*(head++));

	return 0;
}
