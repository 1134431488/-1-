#include <stdio.h>
struct book
{
	char a[10];
	int b;
};

void test(char him[10]);
int main(void)
{
	struct book lib =
	{
		"xuexi",
		100
	};
	printf("%#X\n", lib.a);
	test(lib.a);
	return 0;
}

void test(char him[10])
{
	printf("%#X", him);
}
