#include <stdio.h>
#include <stdlib.h>
#define fname "temp.txt"
int main(void)
{
	FILE *fp;
	if((fp = fopen(fname, "w+")) == NULL)
		puts("���ļ�ʧ�ܣ�"), exit(EXIT_FAILURE);

	fprintf(fp, "ABCDEFGHIZKLMNOPQRSTUVWXYZ"); //���һ���ַ���֮���ļ�λ�÷����˸ı�

	fpos_t fpos; //�ļ���λ���� ������������Ϊָ���ʱ���޷������

	fgetpos(fp, &fpos); //���ļ���ȡ�ļ���ǰλ�õ�fpos
	printf("%ld\n", fpos); //��fpos��ֵ
	fpos = 0L; //�޸�fposΪ�ļ���ʼ��
	fsetpos(fp, &fpos); //����fpos��ַ
	putc(getc(fp), stdout); //�������Ļ
	fclose(fp); //�ر��ļ�
	remove(fname); //ɾ��Ŀ¼�ڵ��ļ�
	return 0;
}
