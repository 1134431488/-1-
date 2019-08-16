#include <stdio.h>
#include <stdlib.h>
#define fname "temp.txt"
int main(void)
{
	FILE *fp;
	if((fp = fopen(fname, "w+")) == NULL)
		puts("打开文件失败！"), exit(EXIT_FAILURE);

	fprintf(fp, "ABCDEFGHIZKLMNOPQRSTUVWXYZ"); //输出一串字符串之后，文件位置发生了改变

	fpos_t fpos; //文件定位类型 变量，在设置为指针的时候无法输出。

	fgetpos(fp, &fpos); //从文件获取文件当前位置到fpos
	printf("%ld\n", fpos); //输fpos出值
	fpos = 0L; //修改fpos为文件开始处
	fsetpos(fp, &fpos); //传入fpos地址
	putc(getc(fp), stdout); //输出到屏幕
	fclose(fp); //关闭文件
	remove(fname); //删除目录内的文件
	return 0;
}
