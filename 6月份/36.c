#include <stdio.h>
#include <string.h>
struct person
{
	int id;
	struct 
	{
		char first[20];
		char last[20];
	} name;	//�����ṹ����ʹ���ҲҪע��ֺŲ���©����Ϊ����һ���������
};

int main(void)
{
	struct person human = {8384, {"����", "����"}};
	printf("%d %s\n", human.id, human.name.first, human.name.last);

	strcpy(name.first, "����");
	strcpy(name.last, "������");
	printf("%s %s\n", name.first, name.last);
	return 0;
}
