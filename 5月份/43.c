#include <stdio.h>
#include <stdlib.h>
#define SIZE 1
typedef struct
{
	char name[10];	//����
	int num;		//����
	int age;		//����
	char addr[15];
} student;	// typedef���������������

student stu[SIZE];	//����һ��Ԫ�ص�����,��������һ��д��

void save(void)	//���溯��
{
	FILE * fp;
	int i;
	if((fp = fopen("dat.txt", "w+")) == NULL)
	{
		printf("�޷��򿪴��ļ���\n");
		exit(EXIT_FAILURE);
	}
	for(i = 0; i < SIZE; i++)
	{
		if(fwrite(&stu[i], sizeof(student), 1, fp) != 1)
			printf("�ļ�д�����\n");
	}
	student std;
	
	fread(&std, sizeof(std), 1, fp);
	puts("�������ṹ��:");
	printf("name = %s num = %d age = %d addr = %s\n", std.name, std.num, std.age, std.addr);
	fclose(fp);
}

void main(void)
{
	int i;
	puts("��������, ��ţ���ͣ��ַ���");
	for(i = 0; i < SIZE; i++)
	{
		scanf("%s %d %d %s", &stu[i].name, &stu[i].num, &stu[i].age, &stu[i].addr);
	}
	save();
}
