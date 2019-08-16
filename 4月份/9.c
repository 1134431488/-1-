#include <stdio.h>
#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;
	char favfool[LEN];
	char job[LEN];
	float income;
};

int main(void) {
	struct guy fellow[2] = {
		{
			.handle = {"张三", "李四"},
			.favfool = "grilled salmon",	/* 烤三文鱼 */
			.job = "personality coach",		/* 个性的教练 */
			.income = 68112.00
		},
		{
			.handle = {"王五", "赵六"},
			.favfool = "tripe",	/*  蜂窝牛肚 */
			.job = "tabloid editor",	/* 小报编辑 */
			.income = 432400.00
		}
	};
	struct guy * him;	/*这是一个指向结构的指针*/
	him = &fellow[0];
	
	printf("%s 喜欢吃 %s\n", (*him).handle.first, (*him).favfool);				/* 指向结构数组的第一个结构元素 */
	printf("%s 是一位有 %s\n", him->handle.first, him->job);
	
	printf("%s 喜欢吃 %s\n", (*(him + 1)).handle.first, (*(him + 1)).favfool);	/* 指向结构数组的第二个结构元素 */
	printf("%s 是一位 %s\n", (him + 1)->handle.first, (him + 1)->job);
	
	struct names y = {
		.first = "第一名",
		.last = "第二名" 
	};
	struct names * hip;
	hip = &y;
	printf("%s %s\n", hip->first, hip->last); 
	printf("%s %s\n", (*hip).first, (*hip).last);
	printf("%s %s\n", (*(hip + 0)).first, (*(hip + 0)).last);
	printf("%s %s\n", (hip + 0)->first, (hip + 0)->last);
	return 0; 
}
