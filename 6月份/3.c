#include <stdio.h>
int main(void)
{
	struct book
	{
		int a[7];	//�����ԷֺŽ�β����ʹ�ǽṹ���ڵĳ�Ա����Ҳ����� 
		int b;
	};

	struct book library =
	{
		.b = 66,				//ָ����ʼ������Եߵ���ʼ���ĳ�Աλ�� 
		.a = {[5] = 10},		//�ڽṹ����ָ����ʼ����Ա���ڳ�Ա������ָ����ʼ������
		77						//��int b��Ա�ڶ��γ�ʼ��������һ�θ�ֵ����ǰһ�θ�ֵ��Ϊ 
	};
	
	for(int n = 0; n < 7; n++)
	{
		printf("a[%d] = %d\n", n, library.a[n]);
	}
	printf("b��ֵΪ��%d\n", library.b);
	 
	return 0;
}
