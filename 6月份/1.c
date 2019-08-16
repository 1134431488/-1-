#include <stdio.h>
#define MAX 41

struct book
{
	char a[MAX];
	char b[MAX];
	float c;
} library;

int main(void)
{
	struct book s =
	{
		.a = "ni hao!",
		.b = "zhong guo",
		68.8
	};
	library = s;
	printf("library %s %s %.1f\n", library.a, library.b, library.c);
	printf("s %s %s %.1f\n", s.a, s.b, s.c);

	return 0;
}
