#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char ch;
	int n, max;
	if((fp = fopen("source.txt", "rb")) == NULL)
		puts("���ļ�ʧ��!"),exit(EXIT_FAILURE);
	fseek(fp, 0L, SEEK_END);	//�����ļ�λ��ָʾ�����ļ�ĩβ
	max = ftell(fp);    //��ȡ��ǰλ��
	fseek(fp, 0L, SEEK_SET);    //�����ļ�λ��ָʾ�����ļ���ʼ
	for(int n = 0; n < max + 1; n++)
	{
//		  ch = getc(fp);
		  fread(&ch, sizeof(char), 1, fp);
		  printf("n = %d char=%c     feof return=%d\n",n ,ch , feof(fp));
	}

	fclose(fp);
	return 0;
}
