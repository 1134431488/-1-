#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);
char *s_gets(char *st, int n);

int main(void)
{
	FILE *fa, *fs;  //fa pointer destination file�� fs pointer source file
	int files = 0;	//append of file number
	char file_app[SLEN];	//destination file name
	char file_src[SLEN];    //source file name
	int ch;

	puts("Enter name of destination file:");    //����Ŀ���ļ�������
	s_gets(file_app, SLEN); 					//����һ���ַ�ָ���ַ����������81
	if((fa = fopen(file_app, "ab+")) == NULL)    //append open file failure fa ==NULL
	{
		fprintf(stderr, "Can't open %s\n", file_app);   //standard ���� ���
		exit(EXIT_FAILURE);
	}
	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)  //������2λNULL��������Ϊ�Լ����仺�������ɹ�����0,ʧ�ܷ�0
	{
		fputs("Can't create output buffer\n", stderr);  //standard ���� ���
		exit(EXIT_FAILURE);
	}
	puts("Enter name of first source file (empty line to quit):");	//�����һ��Դ�ļ�������(Ҫ�˳��Ŀ���)
	while(s_gets(file_src, SLEN) && file_src[0] != '\0')    //��ȡԴ�ļ�(stdin��Դ�ļ�����)��·�����Ƶ�ַ
	{
		if(strcmp(file_src, file_app) == 0)  //С�ڷ��ظ����ַ�����ȷ���0�����ڷ�����
			fputs("Can't append file to itself\n", stderr);  //�޷����ļ����ӵ�����
		else if((fs = fopen(file_src, "rb")) == NULL)    //��ִ�������ʾstrcmp����ȡ�ֻ��ģʽ��ʧ���򷵻�NULL
			fprintf(stderr, "Can't open %s\n", file_src);
		else    //fs�ļ��򿪳ɹ��Ļ�ִ���������
		{

			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)  //�����������ɹ�Ϊ0��ʧ�ܷ�0
			{
				fputs("Can't create input buffer\n", stderr);  //���ܴ������뻺����
				continue;   //������һ��ѭ��
			}
			/*����һ��Դ�ļ�·����ַ�������ַ��Ŀ���ļ�����ͬһ���ļ��������·���ļ������Ŵ���������
			��ִ�������apppend��������Դ�ļ����ݸ��ӵ�Ŀ���ļ�
			*/
			append(fs, fa);     //���ӣ�����Դ�ļ�����Ŀ���ļ���
			if(ferror(fs) != 0) //�ļ���д���󣺷��ط�0ֵ���ļ���д�޴��󣬷���0ֵ
				fprintf(stderr, "Error in reading file %s.\n", file_src);   //��Դ�ļ���������
            if(feof(fa) != 0)   //�ļ����������ط�0ֵ���ļ�δ����������0ֵ
                fprintf(stderr, "Error in writing file %s.\n", file_app);   //д���ļ�����
			 fclose(fs);    //�ر����Դ�ļ�
			 files++;//��¼�ɹ���Դ�ļ��Ĵ���
			 printf("File %s appended.\n", file_src);   //������Դ�ļ�����
			 puts("Next file (empty line to quit):");   //��һ���ļ�(Ҫ�˳��Ŀ���)
		}

	}
	printf("Done appending. %d files appended.\n", files);
	rewind(fa);//�����ļ�λ��ָʾ�����ļ���ʼ��
	printf("%s continue:\n", file_app); //���Ŀ���ļ�����
	while((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");   //��� չ��
	fclose(fa); //�ر��ļ������
	
	return 0;
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	ret_val = fgets(st, n, stdin);  //st�洢n-1���ֽڴ�С���Լ��̵�����
	if(ret_val)
	{
		find = strchr(st, '\n');    //���һ��з�
		if(find)                    //find success == 0 / find failure == NULL
			*find = '\0';   		//�������ַ�ָ��findָ��λ���ϵ�ֵ�޸�Ϊ���ַ�
		else
			while(getchar() != '\n')    //���δ���ֻ��з���ˢ�»�����
				continue;               //������һ��ѭ��
	}
	return ret_val;
}

void append(FILE *source, FILE *dest)   //Դ�ļ�stdin����Ŀ�ĵ��ļ�stdout��
{
	size_t bytes;
	static char temp[BUFSIZE];  //ֻ����һ��(��̬�洢�ڱ�������������������)

	while((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0) //��ȡԴ�ļ�4096��char��С���ݴ洢��temp��ַ
		fwrite(temp, sizeof(char), bytes, dest);  //д��temp��ַbytes��char��С���ݵ�Ŀ���ļ�
}
