#include <stdio.h>
int main(void)
{
	char *text = "ÄãºÃ!";
	char Text[]= "CÊÀ½ç!"; 
	int n;
	fputs(text, stdout);
	n = fputs(Text, stdout);
	printf("\n\n%s\n", n); 
	return 0;
 } 
