#include <stdio.h>//��������ʱ���ʱ�����00:00:00��ʽ���
int main(void)
{
	int time = 0;
	int timex = 0;
	int timec;
	int s, f, m;
	s = f = m = 0;//��ʼ��
	time = time_s();
	timex = time_s();
	printf("time:%d timex:%d\n", time, timex );

	if(time >= timex)//�����Сʱ�������
		timec = time - timex;
	else if(time < timex)
		timec = timex - time;

	printf("%d\n", timec);
	if(timec <= 0)
		printf("00:00:00");
	else
	{
		s = timec / 3600;   //С��3600����СʱΪ0
		if(s <= 9 )
			printf("0%d:", s);
		else
			printf("%d:", s);
		f = timec % 3600 / 60;//���� = ���� / 3600������ = ʣ����� / 60
		if(f <= 9)
			printf("0%d:", f);
		else
			printf("%d:", f);
		m = timec % 60; //����60�ľ����룬��60���Ƿ�
		if(m <= 9)
			printf("0%d:", m);
		else
			printf("%d:", m);
	}

	return 0;
}
int time_s(void)
{
	int s, f, m;
	int time = 0;//��ʼ��
	printf("Сʱ��");
	scanf("%d", &s);
	printf("���ӣ�");
	scanf("%d", &f);
	printf("  �룺");
	scanf("%d", &m);
	printf("%d:%d:%d\n", s, f, m);
	time += s * 60 * 60;
	time += f * 60;
	time += m;

	return time;
}
