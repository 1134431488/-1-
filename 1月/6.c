#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
    if((fp = fopen("文本.txt", "r+") ) == NULL)
    {
    	printf("以文本模式打开，r+可读写（更新模式），因文件不存在则显示此语句！\n");
    	printf("证明了r+模式所打开的文件必须是事先创建好的文件。");
		exit(EXIT_FAILURE);
	}
	printf("以r+模式新建了一个文本文件\n");
	
	fclose(fp);
	return 0;
}
