#include <stdio.h>
int cc = 11;
int main(void)
{
	int cc;
	printf("%d\n", cc);
	extern int cc = 12;
	return 0;
}
