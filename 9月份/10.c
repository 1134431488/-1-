#include <stdio.h>
int units = 0;//�ⲿ����ֻ���Գ�����ʼ����ֵ

void critic(void);
int main(void)
{
	extern int units;//�������������Զ��丳ֵ

	/*�洢���˵������extern���߱�����������
	��ʾ�˺����е��κ�ʹ��units�ĵط�������
	ͬһ�������ں����ⲿ�ı���
	��˲����ڴ˺������ظ�����units��
	���ǿ����ں�����ĳһ�����ж����Զ�����units*/
	scanf("%d", &units);
	while(units != 56)
		critic();
	printf("������");

	{
		auto int units = 10;//��ʾ������Զ��洢����units
		printf("%d", units);
	}

}
void critic(void)
{
	printf("���ԣ����ٴ�����:\n");
	scanf("%d", &units);
}
