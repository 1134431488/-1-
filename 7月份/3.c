#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 	10
char * s_gets(char * st, int n);
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
int main(void)
{
	struct book library[MAXBKS];	//����һ���ṹ���飬������Ԫ��
	int count = 0;					//����һ������
	int index, filecount;			//����һ��������һ���ļ�����
	FILE * pbooks;					//����һ���ļ�ָ��
	int size = sizeof(struct book);	//����һ���ṹ��С

	if((pbooks = fopen("book.dat", "a+b")) == NULL)		//���ļ�ָ�븳ֵһ���ļ���������
	{
		fputs("Can't open book.dat file\n", stderr);	//��׼����
		exit(1);										//��������ִ��
	}

	rewind(pbooks);										//�ļ�λ��ָʾ���ص��ļ���ʼ��,��0�ֽڵ�λ��
	while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)	//������������ļ��Ľṹ���������ݣ�����еĻ� 
	{
		//��0��9,10�α��������ݵ��ṹ��������׵�ַ����Ϊ��һ�����ݣ��ɹ��򷵻ز���3
		if(count == 0)
			puts("Current contents of book.dat:");
		printf("%s %s %.2f\n", library[count].title,
		       library[count].author, library[count].value);	//��ӡ�������ṹ��������������
		count++;	//����
	}
	filecount = count;	//��¼����������
	if(count == MAXBKS)	//�����������������10
	{
		fputs("The book.dat file is full.", stderr);	//��׼����
		exit(2);	//��������ִ��
	}

	puts("Please add new book title.");
	puts("Press [enter] at the start of a line to stop.");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL	//��ñ��⣬�������з�
	        && library[count].title[0] != '\0')	//���Ϊ���ַ����˳�ѭ��
	{
		puts("Now enter the author.");
		s_gets(library[count].author, MAXAUTL);	//��ȡ���ߣ���ȥ���з�
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);	//��ȡһ��ֵ 
		while(getchar() != '\n')				//�������з���scanf������һ�����з� 
			continue;							//������һ��ѭ����ʼ 
		if(count < MAXBKS)						//���count��ȻС��10 
			puts("Enter the next title.");
	}

	if(count > 0)								//�����һѭ���ɹ���ַ��count��ִ�У����ʾ��filecount������ʼ�Ľṹ�������������� 
	{
		puts("Here is the list to your books:");
		for(index = 0; index < count; index++)	 
			printf("%s %s %.2f\n", library[index].title,	//��Ϊ�ʼ����һ���ļ�����������������ݣ�Ҳ�������µĽṹ������ 
			       library[index].author, library[index].value);
		fwrite(&library[filecount], size, count - filecount, pbooks);	//�ѽṹ���������һ���Զ�д���ļ�����������������ʼ��д����� 
	}
	else
		puts("No books? Too bad.\n");
	puts("Bye.\n");
	fclose(pbooks);

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
