#include <stdio.h>
void report_count();
void accumulate(int k);
int count = 0;

int main(void)
{
	int value;//自动变量
	register int i;//寄存器变量

	printf("Enter apositive integer (0 to quit):");
	while(scanf("%d", &value) == 1 && value > 0)
	{
		++count;
		for(i = value; i >= 0; i--)
			accumulate(i);
		printf("Enter a posiitive integer (0 to quit):");
	}
	report_count();

	return 0;
}

void report_count()
{
	printf("Loop executed %d times\n", count);
}

