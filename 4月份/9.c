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
			.handle = {"����", "����"},
			.favfool = "grilled salmon",	/* �������� */
			.job = "personality coach",		/* ���ԵĽ��� */
			.income = 68112.00
		},
		{
			.handle = {"����", "����"},
			.favfool = "tripe",	/*  ����ţ�� */
			.job = "tabloid editor",	/* С���༭ */
			.income = 432400.00
		}
	};
	struct guy * him;	/*����һ��ָ��ṹ��ָ��*/
	him = &fellow[0];
	
	printf("%s ϲ���� %s\n", (*him).handle.first, (*him).favfool);				/* ָ��ṹ����ĵ�һ���ṹԪ�� */
	printf("%s ��һλ�� %s\n", him->handle.first, him->job);
	
	printf("%s ϲ���� %s\n", (*(him + 1)).handle.first, (*(him + 1)).favfool);	/* ָ��ṹ����ĵڶ����ṹԪ�� */
	printf("%s ��һλ %s\n", (him + 1)->handle.first, (him + 1)->job);
	
	struct names y = {
		.first = "��һ��",
		.last = "�ڶ���" 
	};
	struct names * hip;
	hip = &y;
	printf("%s %s\n", hip->first, hip->last); 
	printf("%s %s\n", (*hip).first, (*hip).last);
	printf("%s %s\n", (*(hip + 0)).first, (*(hip + 0)).last);
	printf("%s %s\n", (hip + 0)->first, (hip + 0)->last);
	return 0; 
}
