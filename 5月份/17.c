#include <stdio.h>
#include <string.h>
int put2(const char * string)
{
	int count = 0;
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');
	return(count);
}

int main(void)
{
	void fit(char * string, unsigned int size);
//	printf("%d", put2("ѧϰ"));
	char mesg [ ] = "Things should be as simple as possible,"
	                " but not simpler.";
	puts(mesg);
	fit(mesg, 38);
	puts(mesg);
	puts("Let's look at some more of the string.");
	puts(mesg + 39);

	return 0;
}
void fit(char * string, unsigned int size)
{
	if(strlen(string) > size)
		string[size] = '\0';
}
