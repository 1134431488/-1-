#include <stdio.h>

struct book
{

	char * pst;
};
int main(void)
{
	struct book library =
	{
		"����һ���ַ���"
	};
	printf("%#X\n", library.pst);
	scanf("%s", library.pst);
	printf("%#X\n", library.pst);
	return 0;
}
