#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	// ����˵�ļ�ָ��ʵ������һ���ṹ��ָ�롣fopen()������fp����ṹ��ָ�븳ֵ
	// �������ҵĺ��棬���뿴����������Щ��Ա����ֵ��ʲô��
	FILE * fp;
	if((fp = fopen("temp.txt", "a+")) == NULL)
	{
		fputs("���ļ�ʧ�ܣ�\n", stderr);
	}
	char str[10] = {[0] = '\0'};	//ָ����ʼ����
	fgets(str, 10, fp);
	printf("�ļ�ԭ����������:%s\n", str);
	rewind(fp);
	fputs("666", fp);	//����ַ������ı�ģʽ�ļ�����
	printf("�ļ����ڵ�������:%s\n", str);
	printf("ptr=%s\n cnt=%d\n base=%s\n flag=%d\n file=%d\n charbuf=%d\n bufsiz=%d\n tmpfname=%s\n",
	       fp[0]._ptr,
	       fp[0]._cnt,
	       fp[0]._base,
	       fp[0]._flag,
	       fp[0]._file,
	       fp[0]._charbuf,
	       fp[0]._bufsiz,
	       fp[0]._tmpfname);

	fclose(fp);
//	remove("temp.txt");
	return 0;
}

//	  char *_ptr;
//    int _cnt;
//    char *_base;
//    int _flag;
//    int _file;
//    int _charbuf;
//    int _bufsiz;
//    char *_tmpfname;
