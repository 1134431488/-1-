#include <stdio.h>

struct book {
	char str1[21];
	char str2[21];
};

int main(void) {
	struct book old_s, new_s;
	/* Ŀ�ģ�ͬһ����ǲ�ͬ�������Ƿ���ͬһ�ṹ�� */
	scanf("%s %s", old_s.str1, old_s.str2);
	printf("old:str1=%s     str2=%s\n", old_s.str1, old_s.str2);
	printf("new:str1=%s	    str2=%s\n", new_s.str1, new_s.str2);
	/* ���Խṹ��������Ȼ������ͬ����ͨ��identifier���ʵĶ������ݽ�Ȼ��ͬ�� */
	return 0;
}
