#include <stdio.h>

void str(char *p[50], int n)
{
	for(int i = 0; i < n; i++)
		puts(p[i]);
}

int main(void)
{
	char str1[3][50] =
	{
		"学海无涯",
		"苦做舟！",
		"回头无岸."
	};
	for(int k = 0; k < 3; k++)
		puts(str1[k]);

	str(str1, 3);
	return 0;
}


