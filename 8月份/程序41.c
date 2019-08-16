#include <stdio.h>//计算两个时间的时间差以00:00:00格式输出
int main(void)
{
	int time = 0;
	int timex = 0;
	int timec;
	int s, f, m;
	s = f = m = 0;//初始化
	time = time_s();
	timex = time_s();
	printf("time:%d timex:%d\n", time, timex );

	if(time >= timex)//输入的小时次序调整
		timec = time - timex;
	else if(time < timex)
		timec = timex - time;

	printf("%d\n", timec);
	if(timec <= 0)
		printf("00:00:00");
	else
	{
		s = timec / 3600;   //小足3600秒则小时为0
		if(s <= 9 )
			printf("0%d:", s);
		else
			printf("%d:", s);
		f = timec % 3600 / 60;//分钟 = 总秒 / 3600的余数 = 剩余的秒 / 60
		if(f <= 9)
			printf("0%d:", f);
		else
			printf("%d:", f);
		m = timec % 60; //不足60的就是秒，够60就是分
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
	int time = 0;//初始化
	printf("小时：");
	scanf("%d", &s);
	printf("分钟：");
	scanf("%d", &f);
	printf("  秒：");
	scanf("%d", &m);
	printf("%d:%d:%d\n", s, f, m);
	time += s * 60 * 60;
	time += f * 60;
	time += m;

	return time;
}
