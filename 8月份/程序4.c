#define MSG "I m special"
#include <stdio.h>
int main(void)
{
	char ar[] = MSG;
	const char *pt = MSG;

	printf("����	%#X\n", ar);
	printf("ָ��	%#X\n", pt);
	printf("Դ	%#X\n", MSG);
	char *head = "klklk";
	while(*(head) != '\0')
		putchar(*(head++));

	return 0;
}
