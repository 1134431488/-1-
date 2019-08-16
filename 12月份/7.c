#include <stdio.h>
extern int pr;
void hanshu(int k);
static int tlu = 0;
void hanshu(int k)
{
	static int jilu = 0;

	if(k <= 0)
	{
		printf("jilu:%d  ", jilu);
		printf(" tlu:%d\n\n", tlu);
		printf("PR = %d\n", pr);
		jilu = 0;
	}
	jilu += k;
	tlu += k;
	
}
