#include <stdio.h>
#include <string.h>
#define LIST 22 //多出两个元素存放回车和空字符 
#define ROWS 6
int strcmpkk(const char *text1, const char *text2);
int main(void)
{
	FILE *fp1;
	int n, m, b;
	char array1[ROWS][LIST];//存储记事本获取到的字符串的二维数组

	fp1 = fopen("001.txt", "a+");//打开可读写文件
	for(n = 0; n < ROWS && fgets(array1[n], LIST, fp1) != NULL; n++)//数组获取字符串到每一行
	{
		printf("%s", array1[n]);
	}

	for(m = 0; m < ROWS; m++)//去除重复
		for(n = m + 1; n < ROWS; n++)
			if(strcmpkk(array1[m], array1[n]) == 0)
				for(b = 0; b < LIST; b++)//对array1[n]这行的列值全部赋值为空字符
					array1[n][b] = '\0';

	printf("\n\n");//第二部分
	fclose(fp1);/*关闭文件*/

	fp1 = fopen("001.txt", "a+");//打开可读写文件
	fputs("\n去重的号码与非重复号码：\n", fp1);//记事本加入一个换行符, 输出去重和不重复的数据
	for(n = 0; n < ROWS; n++)//验证输出至屏幕与附加到原先的记事本处
	{
		printf("%s", array1[n]);//显示去重复的内容
		fputs(array1[n], fp1);//输出附加到原先记事本的末尾
	}
	fclose(fp1);/*关闭文件*/
	return 0;
}

int strcmpkk(const char *text1, const char *text2)//两个字符串进行比较的函数，相同则返回 0
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
