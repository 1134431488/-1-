#include <stdio.h>
void report();
void acc(int k);
int count = 0;
int main(void)
{
	int v;
	register int i;
	while(scanf("%d", &v) == 1 &&  v > 0)
	{
		++count;
		for(i = v; i >= 0; i--)
			acc(i);
	}
	return 0;
}

static int total = 0;
void acc(int k)
{
	extern int count;
	static int sub = 0;
	if(k <= 0)
	{
		printf("loo cycle:%d\n", count);
		printf("sub = %d total = %d\n", sub, total);
	}
	else
	{
		sub += k;
		total += k;
	}
}
