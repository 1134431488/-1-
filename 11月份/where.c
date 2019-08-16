#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int static_store = 30;
const char *pcg = "String Literal";
int main(void)
{
	int auto_store = 40;
	char auto_string [] = "Auto char Array";
	int * pi;
	char * pcl;

	pi = (int *) malloc(sizeof(int));
	*pi = 35;
	pcl = (char *) malloc(strlen("Dynamic String") + 1);//��̬����ռ�
	strcpy(pcl, "Dunamic String");//���丳ֵ
	//�ⲿ�����Լ��������ڴ��ַռ��һ������
	printf("static_store: %d at %X �ⲿ���ӱ���\n", static_store, &static_store);//�ⲿ���ӱ��� 30
	printf("  %s at %X ֻ���ⲿ���ӱ���\n", pcg, pcg);//ֻ���ⲿ���ӱ��� "String Literal"
	printf("   %s at %X ���ڳ���\n\n", "Quoted String", "Quoted String");//�����ַ������
	//�����ӵ��Զ��������ڲ���ַռ����һ������
	printf("  auto_store: %d at %X �����ӱ���\n", auto_store, &auto_store);//�����ӱ��� 40
	printf(" %s at %X �����ӱ���\n\n", auto_string, auto_string);//�����ӱ��� "Auto char Array";
	//��̬�ڴ����������ڲ���ַռ�õ�3������
	printf("  %s at %X ��̬�ڴ�������\n", pcl, pcl);//��̬�ڴ������� Dynamic String
	printf("	 *pi: %d at %X ��̬�ڴ�������\n", *pi, pi);//��̬�ڴ������� 35

	free(pi);
	free(pcl);

	return 0;
}
