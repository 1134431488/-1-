#include <stdio.h>
#define MSG "I am a symbolic string constant." 	//我是一个具有象征意义的字符串常量
#define MAXLENGTH 81
int main(void)
{
	char words[MAXLENGTH] = "I am a symbolic string constant.";
	const char * pt1 = "Something is ponting at me.";
	puts("Here are some string:");
	puts(MSG);
	puts(words);
	puts(pt1);
	words[0] = 'p';
	puts(words);
	return 0;
}
