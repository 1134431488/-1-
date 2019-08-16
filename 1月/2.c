#include <stdio.h>  //standard high - level I/O ��׼�߼���C���׼��
#include <stdlib.h> //�ṩexit()ԭ��

int main(int argc, char *argv[])
{
	int ch;     //��ȡ�ļ�����ÿ���ַ��ĵط�
	FILE *fp;   //�ļ�ָ�룬��������
	unsigned long count = 0;

	if(argc != 2)
	{
		printf("�ļ�����%s\n", argv[0]);
		printf("ȱ���ڶ�������\n");
		exit(EXIT_FAILURE);
	}
	if((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("ֻ����ʽ���ļ�ʧ��\n");
		exit(EXIT_FAILURE);
	}
	while((ch = getc(fp)) != EOF)	//��fp�ļ�ָ���ȡ�ַ��������ļ�ĩβ(EOF)���˳�ѭ��������ִ��ѭ��
	{
		putc(ch, stdout);   //��putchar(ch); ��ͬ������Ϣ�ӳ����͵���Ļ
		count++;    //�����ַ�������
	}
	fclose(fp);
	printf("�ļ������֣�%s�� �ļ����ַ�����%d\n", argv[1], count);

	return 0;
}
