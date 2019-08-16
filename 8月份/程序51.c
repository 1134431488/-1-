#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	if ((fp = fopen("C:\\qwe\\o.txt", "r")) == NULL)
		{
			printf("打开失败\n");
			exit(0);
		}

	ch = fgetc(fp);
	while (!feof(fp))//结束返回非0  取反则不循环，为0则循环，为0则不结束
	{
	    putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	system("pause");
	return 0;
}

