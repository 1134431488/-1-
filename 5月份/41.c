#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main(void)
{
	double numbers[ARSIZE];	//声明一个1000个元素的double类型的数组
	double value;	//声明一个double类型的变量
	const char * file = "numbers.dat";	//声明一个只读字符串指针
	int i;
	long pos;
	FILE * iofile;

	for(i = 0; i < ARSIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);

	if((iofile = fopen(file, "wb")) == NULL)
		fprintf(stderr, "Could not open %s for output.\n", file), exit(EXIT_FAILURE);

	fwrite(numbers, sizeof(double), ARSIZE, iofile);	//输出1000块double类型字节大小的numbers到文件中
	//numbers是一个double数组，数组名当成地址来用 
	fclose(iofile);
	if((iofile = fopen(file, "rb")) == NULL)
		fprintf(stderr, "Could not open %s for output.\n", file), exit(EXIT_FAILURE);
	
	printf("输入0 - %d的数字\n", ARSIZE - 1);
	while(scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long) i * sizeof(double);	//一个double字节宽度
		fseek(iofile, pos, SEEK_SET);	//定位到iofile文件开始处，偏移pos个字节
		fread(&value, sizeof(double), 1, iofile);
		printf("它的值是 %f.\n", value); 
		printf("输入下一个数字:\n");
	}
	fclose(iofile);
	puts("Bye!");
	
	return 0;
}
