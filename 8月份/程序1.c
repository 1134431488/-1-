#include <stdio.h>//��׼�������ͷ�ļ�
#define MSG "I am a sy."//���� �ַ���
#define MAX 81//���� ����81
int main(void)//��������
{
	float shoe = 2.0;
	while(++shoe < 18.5)//�ȵ���shoe��ֵ �ٱȽ�����
	{
		printf("%f\n", shoe);
	}
	//�鿪ʼ
	char words[MAX] = "IIII";//�ַ�������
	const char *pt1 = "SOOO";//�ַ���ָ��-ֻ���ַ�����
	puts("HHHH");//���һ�������ַ���
	puts(MSG);//���һ��������ַ
	puts(words);//�����������ַ
	puts(pt1);//���һ��ָ���ַ
	words[2] = 'p';//�޸�����Ԫ��3
	puts(words);//������޸ĵ�����
	printf("����ַ���:%s \n�����ַ:%#X\n����ַ�:%c\n", "III", "III", *"III");
	//��������:�ض�
	printf("5/4 = %d\n", 5 / 4);
	printf("6/3 = %d\n", 6 / 3);
	printf("7/4 = %d\n", 7 / 4);
	printf("7./4. = %1.2f\n", 7. / 4.);
	printf("7./4 = %1.2f\n", 7. / 4);
	printf("6/2*3 = %d\n", 6 / 2 * 3);
	printf("%d\n", -(2+5)*6+(4+3*(2+3)));
	//�µ�C�������ǿ���������λ����������
	long num;//δ��ʼ��
	long sum = 0L;//��L��׺��long��������
	_Bool input_is_good;//��������

	input_is_good = (scanf("%ld", &num) == 1);//�ɹ��ͷ�����������num��ֵ
	while(input_is_good)//Ϊ0���Ϊ1����
	{
		//�鿪ʼ
		sum += num;//sum �����Ҳ����յĽ��
		input_is_good = (scanf("%ld", &num) == 1);//�ɹ��ͷ�������
	}//�����
	printf("%d\n", sum);//������
	//ƽ���˷�
	num = 1;
	while(num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}
	return 0;//���򷵻�
}//�����
