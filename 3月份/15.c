#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000
int main(void)
{
	double numbers[ARSIZE];
	double value;
	const char * file = "numbers.dat";
	int i;
	long pos;
	FILE *iofile;
	
	//创建一组 double 类型的值
	for(i = 0; i < ARSIZE; i++)
	{
		numbers[i] = (100.0 * i) + (1.0 / (i + 1));
		printf("%lf\n", numbers[i]);
	}
	//尝试打开文件
	if((iofile = fopen(file, "wb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for output.\n", file);
		exit(EXIT_FAILURE);
	}
	//以二进制格式把数组写入文件
	fwrite(numbers, sizeof(double), ARSIZE, iofile);
	fclose(iofile);
	if((iofile = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr,
		        "Could not open %s for random access.\n", file);
		exit(EXIT_FAILURE);
	}
	//从文件中读取选定的内容
	printf("Enter an index in the range");
	while(scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long) i * sizeof(double);	//计算偏移量，因为文件中存储的是double数组，因此一次偏移double长度
		//假设文件中是Unicode 双字节，i应该乘于2个字节，才是正常的偏移操作
		fseek(iofile, pos, SEEK_SET);	//定位到此处
		fread(&value, sizeof(double), 1, iofile);
		printf("The value there is %lf.\n", value);
		printf("Next index (out of range to quit):\n");
	}
	fclose(iofile);
	puts("Bye!");

	return 0;
}
