#include <stdio.h>
int main(void)
{
	char *text = "���!";
	char Text[]= "C����!"; 
	int n;
	fputs(text, stdout);
	n = fputs(Text, stdout);
	printf("\n\n%s\n", n); 
	return 0;
 } 
