#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv [])
{
	char ch;  /*The store characters*/
	FILE *fp;
	unsigned long count = 0;
//	if(argc != 2)
//	{
//		printf("Usage: %s filename\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
	argv[1] = "temp.txt";   //此处可注释,if语句可开启
	if((fp = fopen(argv[1], "r")) == NULL )
	{
		printf("Can not open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while(EOF != (ch = getc(fp)))
	{
		putc(ch, stdout);   //And putchar(ch) identical;
		count++;
	}
	rewind(fp);
	char words[40];
	puts("\n");
	while (EOF != (fscanf(fp, "%s", words)))
		fprintf(stdout, "%s\n", words);
	fclose(fp);
	printf("File %s has %lu characters\n", argv[1], count);
	return 0;
}
