#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_store = 30;  //�ļ��������ⲿ���Ӿ�̬�洢�������ͱ���
const char *pcg = "String Literal";	//�ļ��������ⲿ���Ӿ�̬�洢��ֻ���ַ���ָ�����

int main(void)
{
	int auto_store = 40;	//���������������Զ��洢�������ͱ���
	char auto_string [] = "Auto char Array";	//���������������Զ��洢���ַ������ͱ���
	int * pi;	//���������������Զ��洢��������ָ�����
	char * pcl;	//���������������Զ��洢���ַ���ָ�����

	pi = (int *) malloc(sizeof(int));   //��̬����4���ֽ��ڴ�ռ䣬��ʹ��piָ����
	*pi = 35;	//��ָ��*pi��ֵ
	pcl = (char *) malloc(strlen("Dynamic String") + 1);//��ȡ�ַ�����Ч�ַ�����+1��ָ�����һ���ռ�����ַ���strlen����ѿ��ַ�������Ч�ַ�
	strcpy(pcl, "Dynamic String");//�����ַ�����pcl

    printf("�ļ�������̬������\n");
	printf("%-10d	%p\n", static_store, &static_store);
	printf("%-10s	%p\n", pcg, pcg);
	putchar('\n');
	printf("���������Զ�������\n");
	printf("%-10d	%p\n", auto_store, &auto_store);
	printf("%-10s	%p\n", auto_string, auto_string);
	putchar('\n');
	printf("��̬�ڴ���������\n");
	printf("%-10s	%p\n", pcl, pcl);
	printf("%-10d	%p\n", *pi, pi);
	putchar('\n');
	printf("һ��ľ�̬�ַ���������:\n");
	printf("%-10s	%p\n", "Quoted String", "Quoted String");
	free(pi);
	free(pcl);

	return 0;
}
