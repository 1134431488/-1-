#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char ch;
	if ((fp = fopen("C:\\qwe\\o.txt", "r")) == NULL)
		{
			printf("��ʧ��\n");
			exit(0);
		}

	ch = fgetc(fp);
	while (!feof(fp))//�������ط�0  ȡ����ѭ����Ϊ0��ѭ����Ϊ0�򲻽���
	{
	    putchar(ch);
		ch = fgetc(fp);
	}
	fclose(fp);
	system("pause");
	return 0;
}

