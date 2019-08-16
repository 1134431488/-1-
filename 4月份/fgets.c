#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];//所获取的字符串都存放在数组里面 
	int i;
	puts("输入字符串（空行退出）:");
	while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
	{
		i = 0;
		while(words[i] != '\n' && words[i] != '\0')//如果数组[i]元素不为换行符,和不为空字符
		i++;//继续遍历数组的下一个元素
		//当遇到'\n'或'\0'就执行下面这一行
		if(words[i] == '\n')//如果这个数组[i]存储的就是'\n'
			words[i] = '\0';//就把这个数组[i]修改成空字符'\0'
		else//第二种情况是遇到的为'\0'，则执行下面代码
			while(getchar() != '\n')
			continue;//获取这个空字符并且舍去直到遇到下一个换行符才执行下面的代码
		puts(words);//输出一个没有换行符，没有空字符的字符串，并在它末尾添加字符串
	}
	puts("Done!");//结束
	return 0; 
}
