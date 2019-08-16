#include <stdio.h>
#include <string.h>
int main(void)
{
	const char text1[4] = "wsa";
	const char text2[4] = "qas";
	int n = 0;

	while(n < 4)
	{
		printf("元素：%c 地址：%#X     元素：%c 地址：%#X\n",text1[n], &text1[n], text2[n], &text2[n]);
		n++;
	}	
	printf("strpbrk函数的返回值%#X\n", strpbrk(text1,text2));
	return 0;
}
/*
元素：w 地址：0X62FE40     元素：q 地址：0X62FE30
元素：s 地址：0X62FE41     元素：a 地址：0X62FE31
元素：a 地址：0X62FE42     元素：s 地址：0X62FE32
元素：  地址：0X62FE43     元素：  地址：0X62FE33
strpbrk函数的返回值0X62FE41
实验结论：参数1=s1、参数2=s2 
 
1.返回的是S1的字符's'的地址
2.在S2字符串元素a和s都是出现在s1当中的，返回s1首个相匹配的字符的地址
3.s1的元素w不在s2字符串中，但s字符元素在s2字符串中。所以返回这个s的字符地址
3.strpbrk的返回值是从s1中返回的 
*/
