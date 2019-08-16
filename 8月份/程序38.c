#include <stdio.h>
int main(void)
{
	int a[11] = {[10] = 0}; //指定初始化所有元素为0
	int i, t;

	for(i = 0; i < 5; i++) //循环读入5个待排序的数
	{
		scanf("%d", &t);    //读取一个值作为数组a的下标，前提这个值不要超过10
		a[t] = 1;//这个下标的元素值  =  1 进行标记
	}

	for(i = 10; i >= 0; i--)
		if(a[i] == 1) //如果元素上的值为1
			printf("%d ", i);
	printf("\n");

	return 0;
}
