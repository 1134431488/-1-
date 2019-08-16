#include <stdio.h>
#include <string.h>
int strcmpkk(const char *text1, const char *text2);
int main(void)
{

	printf("返回值为 %d\n", strcmpkk("asd", "asd"));

	return 0;
}
int strcmpkk(const char *text1, const char *text2)
{
	int n;
	if(strlen(text1) == strlen(text2))//有效字符元素长度一致
	{
		while(*text1 == *text2 && *text1 != '\0')//读字符进行对比一致,检测到空字符退出
		{
			text1++;//开始遍历字符串 1
			text2++;//开始遍历字符串 2

		}
		if(*text1 == *text2)    //相等返回零 
		return 0;
		else if(*text1 < *text2)//左值小于右值返回负数 -1 
		return -1;
		else					//左值大于右值返回正数 1 
		return 1;
	}
	else
		return -2;//字符长度不相等直接返回-2 
}
