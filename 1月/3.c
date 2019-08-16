#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *in, *out;
	int ch;
	int count = 0;

	if((in = fopen("C:\\Users\\lenovo\\Desktop\\x.txt", "r")) == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while((ch = getc(in)) != EOF)
		count++;
	printf("%d", count);

	fclose(in);
	return 0;
}
