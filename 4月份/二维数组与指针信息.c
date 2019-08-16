#include <stdio.h>
int main(void)
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
	printf("int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}}\n\n");
	printf("      zippo = %X,     zippo + 1 = %X\n", zippo, zippo + 1);       //地址-行偏移
	printf("  zippo[0]  = %X,  zippo[0] + 1 = %X\n", zippo[0], zippo[0] + 1); //地址-列偏移
	printf("     *zippo = %X,    *zippo + 1 = %X\n", *zippo, *zippo + 1);     //地址-列偏移，和上一行是一样的效果
	putchar('\n');								  //-------------------------------------------
	printf("zippo[0][0] = %d\n", zippo[0][0]);				  //两个[]引用一个值
	printf("  *zippo[0] = %d\n", *zippo[0]);				  //一个*，一个[]引用一个值
	printf("    **zippo = %d\n", **zippo);					  //两个*引用一个值，由此得出*与[]是相同效果的
	putchar('\n');								  //-------------------------------------------
	printf("	zippo[2][1] = %d\n", zippo[2][1]);			  //2行1列的值，记住下标从0开始。正确来说是3行2列的值
	printf("*(*(zippo + 2) + 1) = %d\n",*(*(zippo + 2) + 1) );		  //和上一行是一样的效果
	putchar('\n');
	printf("  zippo[0]=%#X\n:*zippo[0]=%d\n\n",zippo[0],*zippo[0]);//把二维数组拆成一维数组来看，却是有区别的，zippo[0]是一个地址 
	printf("       zippo:%#X\n   &zippo[0]:%#X\n    zippo[0]:%#X\n&zippo[0][0]:%#X\n",zippo,&zippo[0],zippo[0],&zippo[0][0]);//表示首元素的4种方式
	printf("%d\n",zippo+2); 
	return 0;
}
