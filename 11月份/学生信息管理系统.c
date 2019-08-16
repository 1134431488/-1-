#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *name = NULL;
	unsigned int id = 0;
	printf(
	    "欢迎使用学生信息管理系统"
	    "\n输入你的名字:");
	if(scanf("%s", &name) != 1 || name == NULL)
		exit(EXIT_FAILURE);
	printf("你好%s,请输入你的学号:", &name);
	if(scanf("%u", &id) == 1 && id != 0);
	printf("%你的学号为%u,\n", id);
	
	return 0;
}
