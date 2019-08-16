#include <stdio.h>

int main(void)
{
	FILE * input, * output;
	char bufr[512];

	input = fopen("a.txt", "r+");
	output = fopen("b.txt", "r+");
	if(setvbuf(input, bufr, _IOFBF, 512) != 0)	/* 失败 */
		printf("未能为输入文件设置缓冲区\n");
	else
		printf("为输入文件设置缓冲区\n");

	if(setvbuf(output, NULL, _IOLBF, 132) != 0)	/* 为流指定特殊的缓冲区*/
		printf("未能为输出文件设置缓冲区\n");
	else
		printf("为输出文件设置缓冲区\n");
	int ch;
	while((ch = getc(input)) != EOF)
		putc(ch, stdout);
	printf("\nbufr:%s\n", bufr);
	fclose(input);
	fclose(output);

	return 0;
}
