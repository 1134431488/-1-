#include<stdio.h> 
#define STLEN 81
int main(void)
{
	char words[STLEN];
	puts("Enter a string , please.");
	gets(words);//从键盘获取字符串并且保存到数组名里面
	printf("Your string twice:\n");
	printf("%s\n", words);//用字符串的形式输出这个数组名
	puts(words);
	puts("Done.");
	return 0; 
 } 
 /*整行输入除了换行符外，都被存储在words中，puts(words)和
 printf("%s\n", words)的效果相同。
 gets（）唯一参数是words，它无法检查数组是否装的下输入行，上一章
 介绍过，数组名会被转换成该数组首元素的地址，因此，gets（）只知道
 数组的开始处，不知道数组的结束处，所以也不知道数组有多少个元素。
 如果输入字符串过长，会导致缓冲区溢出，即多余的字符超出了指定的目标空间。
 如果这些多余的字符只是占用了尚未使用的内存，就不会立即出现问题；如果他们擦
 写掉程序中的其他数据，就会导致程序异常终止；或者还有其他情况。 
 */
