#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
int main(void)
{
	FILE *fp;
	char words[MAX];

	if((fp = fopen("temp", "a+")) == NULL)
	{
		fprintf(stdout, "Can't open \"temp\" file.\n");
		exit(EXIT_FAILURE);
	}
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%s\n", words);
	rewind(fp);
	while(fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done!");
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	remove("temp");	//删除刚刚临时目录内新建的文件
	return 0;
}
