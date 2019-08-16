#include <stdio.h>
#define MSG "I am a symbolic string constant." 
#define MAXLENGTH
int main(void)
{
	char words[MAXLENGTH] = "I am a string in an array.";	//我是数组中的字符串
	const char * pt1 = "Something is pointing at me.";	//有东西在指着我
	puts("Here are some strings:");	//这里有一些字符串:
	puts(MSG);	//外部常量
	puts(words);	//数组变量
	puts(pt1);	//指针变量
	words[8] = 'p';	//改变数组内的第9个元素
	puts(words);	//输出数组变量 
	 
	return 0;
}
/*和printf()函数一样，puts()函数也属于stdio.h系列的输入/输出函数。但是，
与printf()不同的是，puts()函数只显示字符串，而且自动在显示的字符串末尾
加上换行符。

这里使用了字符串常量、char类型数组、指向char的指针定义式声明字符串3种方法
程序应确保有足够的空间储存字符串

字符串字面量（字符串常量）

用双引号括起来的内容称为字符串字面量（string literal）也叫作字符串常量（string constant）。
双引号中的字符和编译器自动加入末尾的\0字符，都作为字符串储存在内存中，所以*/
