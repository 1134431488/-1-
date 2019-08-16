#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char p[] = "HHHHH\n";

	fputs(p, stdout);
	printf(p);
	puts(p);
	system("PAUSE");
	return 0;
}
