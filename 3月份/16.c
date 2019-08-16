#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	FILE *fp;

	if((fp = fopen("temp.txt", "rb")) == NULL)
	{
		fprintf(stderr, "could not file %s.\n", "temp.txt");
		exit(EXIT_FAILURE);
	}
//	char str[] = "文本数据 我是一个文本";
//	fwrite(str, sizeof(char), sizeof(str), fp);
//	double num = 9999999.9999;
//	fwrite(&num, sizeof(double), 1, fp);
//	int data = 123456789;
//	fwrite(&data, sizeof(int), 1, fp);
	char str1[100] = "";
	fread(str1, sizeof(char), 22, fp);
	double num1 = 0.0;
	fread(&num1, sizeof(double), 1, fp);
	int data1 = 0;
	fread(&data1, sizeof(int), 1, fp);
	printf("str1=%s num1=%lf data1=%d\n", str1, num1, data1);
	fclose(fp);
	return 0;
}
