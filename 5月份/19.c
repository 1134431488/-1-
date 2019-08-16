#include <stdio.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char * s_gets(char *st, int n);

int main(void)
{
	char flower[SIZE];
	char addon [] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("What is your favorite flower?");
	s_gets(flower, SIZE);
	if((strlen(addon) + strlen(flower) + 1) <= SIZE)
		strcat(flower, addon);
	puts(flower);
	puts("What is your favorite bug?");

	s_gets(bug, BUGSIZE);	// 对bug赋值字符串，此字符串不得超过BUGSIZE 13 个字符 0 - 12 第13索引是空字符 
	available = BUGSIZE - strlen(bug) - 1;	//求int值， 13 - 得到字符串的大小，再舍1 
	printf("result  =  %d\n", strlen(bug)); 
	strncat (bug, addon, available);	//如果参数3是0，则表示没有剩余空间，无法拼接 
	puts(bug);
	
	
	char h[4] = "123";
	strncat(h, "456666", -1);	//参数3为负数，发现竟然可以拼接 
	puts(h); 
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else if(st[i] == '\0')
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
