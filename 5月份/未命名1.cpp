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

	puts("What is your favorite flower?");//你最喜欢的花是什么 
	s_gets(flower, SIZE);
	if((strlen(addon) + strlen(flower) + 1) <= SIZE)
		strcat(flower, addon);
	puts(flower);//输出这个拼接后的字符串
	puts("What is your favorite bug");//你最喜欢的虫子是什么
	s_gets(bug, BUGSIZE);
	available = BUGSIZE - strlen(bug) - 1;
	 
}
