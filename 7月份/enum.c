#include <stdio.h>
#include <string.h>	//提供strcmp()比较函数，strchr()寻找单字符函数 
#include <stdbool.h>	//C99特性 
char * s_gets(char * st, int n);

enum spectrum { red, orange, yellow, green, blue, violet };
const char * colors[] = { "rad", "orange", "yellow","green", "blue", "violet" };
#define LEN 30

int main(void)
{
	char choice[LEN];
	enum spectrum color;
	bool color_is_found = false;

	puts("Enter a color (empty line to quit):");
	while(s_gets(choice, LEN) != NULL && choice[0] != '\0')	//从标准输入获取一个字符串 
	{
		for(color = red; color <= violet; color++)	//枚举遍历 
		{
			if(strcmp(choice, colors[color]) == 0)	//比较字符串与枚举索引对应数组字符串是否相同 
			{
				color_is_found = true;	//如果相同则退出循环，否则会继续执行 
				break;	//退出循环，避免color被再次递增，用于switch语句 
			}
		}
		
		if(color_is_found)	//如果为真 
			switch(color)	//使用当前的枚举索引，然后输出对应的语句 
			{
				case red :
					puts("Roses are red.");
					break;
				case orange :
					puts("Poppies are orange.");
					break;
				case yellow :
					puts("Sunflowers are yellow.");
					break;
				case green :
					puts("Grass is green.");
					break;
				case blue :
					puts("Bluebells are blue.");
					break;
				case violet :
					puts("Violet are violet.");
					break;
			}
		else
			printf("I don't know about the coloe %s.\n", choice);
		color_is_found = false;
		puts("Next color, please (empty line to qiut):");
	}
	puts("Goodbye!");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;	//清理输入行
	}
	return ret_val;
}
