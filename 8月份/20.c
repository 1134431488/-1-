#include <stdio.h>
#include <stdlib.h>
struct u
{
	int a;
	int b[];
};
int main(void)
{
	struct u * wg1, *wg2;
	
	wg1 = malloc(sizeof(struct u) + 2 * sizeof(int));
	wg2 = malloc(sizeof(struct u) + 2 * sizeof(int));
	
	wg1->a = 9999999;
	for(int i = 0; i < 2; i++)
		wg1->b[i] = i + 1, printf("wg1->b[%d] = %d\n", i, wg1->b[i]);
	*wg1 = *wg2;	//带伸缩型数组成员不能用其结构赋值，这样做只能拷贝除伸缩型数组成员以外的成员

	for(int i = 0; i < 2; i++)
		printf("wg2->b[%d] = %d\n", i, wg2->b[i]);

	puts("检测两个结构体除了伸缩型数组以外的成员值是否一致");
	printf("wg1->a:%d\twg2->a:%d\n", wg1->a, wg2->a); 
	free(wg1);
	free(wg2);
	return 0;
}

