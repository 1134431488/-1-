#include <stdio.h>
int main(void)
{
	int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}};
	printf("int zippo[4][2] = {{2,4},{6,8},{1,3},{5,7}}\n\n");
	printf("      zippo = %X,     zippo + 1 = %X\n", zippo, zippo + 1);       //��ַ-��ƫ��
	printf("  zippo[0]  = %X,  zippo[0] + 1 = %X\n", zippo[0], zippo[0] + 1); //��ַ-��ƫ��
	printf("     *zippo = %X,    *zippo + 1 = %X\n", *zippo, *zippo + 1);     //��ַ-��ƫ�ƣ�����һ����һ����Ч��
	putchar('\n');								  //-------------------------------------------
	printf("zippo[0][0] = %d\n", zippo[0][0]);				  //����[]����һ��ֵ
	printf("  *zippo[0] = %d\n", *zippo[0]);				  //һ��*��һ��[]����һ��ֵ
	printf("    **zippo = %d\n", **zippo);					  //����*����һ��ֵ���ɴ˵ó�*��[]����ͬЧ����
	putchar('\n');								  //-------------------------------------------
	printf("	zippo[2][1] = %d\n", zippo[2][1]);			  //2��1�е�ֵ����ס�±��0��ʼ����ȷ��˵��3��2�е�ֵ
	printf("*(*(zippo + 2) + 1) = %d\n",*(*(zippo + 2) + 1) );		  //����һ����һ����Ч��
	putchar('\n');
	printf("  zippo[0]=%#X\n:*zippo[0]=%d\n\n",zippo[0],*zippo[0]);//�Ѷ�ά������һά����������ȴ��������ģ�zippo[0]��һ����ַ 
	printf("       zippo:%#X\n   &zippo[0]:%#X\n    zippo[0]:%#X\n&zippo[0][0]:%#X\n",zippo,&zippo[0],zippo[0],&zippo[0][0]);//��ʾ��Ԫ�ص�4�ַ�ʽ
	printf("%d\n",zippo+2); 
	return 0;
}
