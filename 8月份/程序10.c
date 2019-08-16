#include <string.h>
#include <stdio.h>
int main(void)
{
	char *word = "quit";
	char ch = 'q';
	if(!(strcmp(word, "quit")))
		puts("Bye!");
	if(ch == 'q')
		puts("Bye!");
	return 0;
}
