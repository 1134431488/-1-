#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
void sleep(int n);
int main(void)
{
	int G = 10;
	int n;
	char *p = "Enter battle!";

	printf("选项：G.1 \n");
	printf("-------\nchoice:");
	while(scanf("%d", &n) == 1)
	{
		if(n == 1)
			break;
		else
			puts("-------");
	}
	puts("-------");
	sleep(1000);
	system("cls");
	if(n == 1)
	{
		n = 2;
		while(n--)
		{
			puts("■■■■■■■■■■■■■■■■");
			puts("■■■■■■■■■■■■■■■■");
			puts("■■□□■■■□□■■■□□■■");
			puts("■■□□□■□□□□■□□□■■");
			puts("■■■□□□□■■□□□□■■■");
			puts("■■■■□□■■■■□□■■■■");
			puts("■■■□□□□■■□□□□■■■");
			puts("■■□□■■□□□□■■□□■■");
			puts("■■■■■■□□□□■■■■■■");
			puts("■■■■■□□□□□□■■■■■");
			puts("■■■■□□□■■□□□■■■■");
			puts("■■■□□□■■■■□□□■■■");
			puts("■■■□□■■■■■■□□■■■");
			puts("■■■■■■■■■■■■■■■■");
			puts("■■■■■■■■■■■■■■■■");
			sleep(100);
			system("cls");
			sleep(25);
			puts("□□□□□□□□□□□□□□□□");
			puts("□□□□□□□□□□□□□□□□");
			puts("□□■■□□□■■□□□■■□□");
			puts("□□■■■□■■■■□■■■□□");
			puts("□□□■■■■□□■■■■□□□");
			puts("□□□□■■□□□□■■□□□□");
			puts("□□□■■■■□□■■■■□□□");
			puts("□□■■□□■■■■□□■■□□");
			puts("□□□□□□■■■■□□□□□□");
			puts("□□□□□■■■■■■□□□□□");
			puts("□□□□■■■□□■■■□□□□");
			puts("□□□■■■□□□□■■■□□□");
			puts("□□□■■□□□□□□■■□□□");
			puts("□□□□□□□□□□□□□□□□");
			puts("□□□□□□□□□□□□□□□□");
			sleep(100);
			system("cls");
			sleep(25);
		}
		puts("■■■■■■■■■■■■■■■■");
		puts("■■■■■■■■■■■■■■■■");
		puts("■■□□■■■□□■■■□□■■");
		puts("■■□□□■□□□□■□□□■■");
		puts("■■■□□□□■■□□□□■■■");
		puts("■■■■□□■■■■□□■■■■");
		puts("■■■□□□□■■□□□□■■■");
		puts("■■□□■■□□□□■■□□■■");
		puts("■■■■■■□□□□■■■■■■");
		puts("■■■■■□□□□□□■■■■■");
		puts("■■■■□□□■■□□□■■■■");
		puts("■■■□□□■■■■□□□■■■");
		puts("■■■□□■■■■■■□□■■■");
		puts("■■■■■■■■■■■■■■■■");
		puts("■■■■■■■■■■■■■■■■");
		sleep(100);

		for(n = 0; n < strlen(p); n++)
		{
			putchar(*(p + n));
			sleep(100);
		}
		sleep(800);
		system("cls");
	}
	n = 0;//初始化
	printf("选项:G.1    T.2\n");
	printf("-------\nchoice:");
	while(scanf("%d", &n) == 1)
	{
		if(n == 1)
			break;
		else if(n == 2)
			puts("逃跑成功!");
		else
			puts("-------");
		break;
	}
	puts("-------");
	if(n == 1)
	{
		printf("G");
		sleep(200);
		printf("HP:");
		sleep(400);
		printf("%d\n", G);
		sleep(500);
		system("cls");
		sleep(200);
		n = 3;
		while(n--)
		{
			printf("GHP:%d\b", G);
			sleep(200);
			system("cls");
		}
		p = "只见一片银芒闪动,幻起朵朵剑花。你像恶狗扑屎一般向G攻击而去!";
		for(n = 0; n < strlen(p); n++)
		{
			putchar(*(p + n));
			sleep(15);
		}
		sleep(200);
		G--;
		printf("\nG受到沉重一击，身上溢出一丝血痕\nGHP:%d\n\n", G);
	}
	return 0;
}
void sleep(int n)//睡眠函数
{
	Sleep(n);//1000毫秒 = 1秒
}

