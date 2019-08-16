#include <stdio.h>
#define N 2
struct type
{
	int 	a;
	int 	b;
	char 	c[21];
	char 	d[21];
};

int fund(const struct type k[], int n);

int main(void)
{
	struct type info[N] =
	{
		{
			.a = 111,
			.b = 222,
			.c = "好好学习",
			.d = "天天向上"
		},
		{
			.a = 333,
			.b = 444,
			.c = "勤学苦练",
			.d = "学以致用"
		}
	};
	int result;
	result = fund(info, N);
	printf("总和是%d\n", result);
	return 0;
}

int fund(const struct type k[], int n)
{
	int i, total;

	for(i = 0, total = 0; i < n; i++)
		total += (*(k + i)).a + (*(k + i)).b;
	return total;
}
