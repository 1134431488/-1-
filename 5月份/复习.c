#include <stdio.h>
#include <stdlib.h>
#define S 14
int main(void)
{
	char w[S];
	int i;
	fgets(w, S, stdin);
	for(i = 0; i < S; i++)
	{
		if(w[i] == '\n')
			w[i] = '\0';
	}
	puts(w);
	fputs(w, stdout);

	return 0;
}
