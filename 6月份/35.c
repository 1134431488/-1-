#include <stdio.h>
struct person
{
	int id;
	struct names
	{
		char first[20];
		char last[20];
	} name;	//�����ṹ����ʹ���ҲҪע��ֺŲ���©����Ϊ����һ���������
};

int main(void)
{
	struct person human = {8384, {"����", "����"}};
	printf("%d %s\n", human.id, human.name.first, human.name.last);

	struct names namex = {"л����", "��ǿ"};
	printf("%s %s\n", namex.first, namex.last); 
	
	return 0;
}
