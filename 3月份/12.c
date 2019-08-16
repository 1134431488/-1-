#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	FILE *in, *out;

	if((in = fopen("temp.txt", "r") == NULL) && (out = fopen("temp1.txt", "w") == NULL))
	{
		puts("以读打开文件失败！");
		exit(EXIT_FAILURE);
	}
	char str[100] = "";
	char copy[100] = "";

	for(int serial = 0; fgets(str, 100, in) != NULL; serial++)
	{
		copy[0] = (char)serial + 48;	//强制类型转换
		strcat(copy, str);
		fprintf(stdout, "%s", copy);
		for(int n = 0; n < 101; n++)
			copy[n] = '\0';
	}

	if(fclose(in) != 0 && fclose(out) != 0)
		puts("结束文件失败！");
	return 0;
}
