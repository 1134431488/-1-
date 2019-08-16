#include <stdio.h>
int main(void)
{
	FILE*stream;
	char string[9];
	stream = fopen("c.txt", "a+"); 
	while(fgets(string, 9, stream) != NULL)
	{
	fputs(string, stdout);
//	fputs(string, stream);		
	}
	return 0;
 } 
