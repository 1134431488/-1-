#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *name = NULL;
	unsigned int id = 0;
	printf(
	    "��ӭʹ��ѧ����Ϣ����ϵͳ"
	    "\n�����������:");
	if(scanf("%s", &name) != 1 || name == NULL)
		exit(EXIT_FAILURE);
	printf("���%s,���������ѧ��:", &name);
	if(scanf("%u", &id) == 1 && id != 0);
	printf("%���ѧ��Ϊ%u,\n", id);
	
	return 0;
}
