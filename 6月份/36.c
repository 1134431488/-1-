#include <stdio.h>
#include <string.h>
struct person
{
	int id;
	struct 
	{
		char first[20];
		char last[20];
	} name;	//匿名结构，即使如此也要注意分号不能漏，因为这是一个声明语句
};

int main(void)
{
	struct person human = {8384, {"张三", "李四"}};
	printf("%d %s\n", human.id, human.name.first, human.name.last);

	strcpy(name.first, "刘能");
	strcpy(name.last, "张玉田");
	printf("%s %s\n", name.first, name.last);
	return 0;
}
