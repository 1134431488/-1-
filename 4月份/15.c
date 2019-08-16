#include <stdio.h>

struct book {
	char str1[21];
	char str2[21];
};

int main(void) {
	struct book old_s, new_s;
	/* 目的：同一个标记不同变量名是否共用同一结构？ */
	scanf("%s %s", old_s.str1, old_s.str2);
	printf("old:str1=%s     str2=%s\n", old_s.str1, old_s.str2);
	printf("new:str1=%s	    str2=%s\n", new_s.str1, new_s.str2);
	/* 测试结构，他们虽然类型相同，但通过identifier访问的对象数据截然不同。 */
	return 0;
}
