#include <stdio.h>
#include <stdlib.h>
#define SIZE 1
typedef struct
{
	char name[10];	//名字
	int num;		//数字
	int age;		//年龄
	char addr[15];
} student;	// typedef定义的新数据类型

student stu[SIZE];	//定义一个元素的数组,变量的另一种写法

void save(void)	//保存函数
{
	FILE * fp;
	int i;
	if((fp = fopen("dat.txt", "w+")) == NULL)
	{
		printf("无法打开此文件！\n");
		exit(EXIT_FAILURE);
	}
	for(i = 0; i < SIZE; i++)
	{
		if(fwrite(&stu[i], sizeof(student), 1, fp) != 1)
			printf("文件写入错误。\n");
	}
	student std;
	
	fread(&std, sizeof(std), 1, fp);
	puts("输出这个结构体:");
	printf("name = %s num = %d age = %d addr = %s\n", std.name, std.num, std.age, std.addr);
	fclose(fp);
}

void main(void)
{
	int i;
	puts("输入名字, 序号，年纪，字符串");
	for(i = 0; i < SIZE; i++)
	{
		scanf("%s %d %d %s", &stu[i].name, &stu[i].num, &stu[i].age, &stu[i].addr);
	}
	save();
}
