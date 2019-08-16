#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char ch;
	int n, max;
	if((fp = fopen("source.txt", "rb")) == NULL)
		puts("打开文件失败!"),exit(EXIT_FAILURE);
	fseek(fp, 0L, SEEK_END);	//设置文件位置指示器到文件末尾
	max = ftell(fp);    //获取当前位置
	fseek(fp, 0L, SEEK_SET);    //设置文件位置指示器到文件开始
	for(int n = 0; n < max + 1; n++)
	{
//		  ch = getc(fp);
		  fread(&ch, sizeof(char), 1, fp);
		  printf("n = %d char=%c     feof return=%d\n",n ,ch , feof(fp));
	}

	fclose(fp);
	return 0;
}
