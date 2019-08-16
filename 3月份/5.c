#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define lon 59		// int常量

static int limit = 0;		// 限制
static int times = 0;		// 次数

void get1(char * p[limit], char array1[lon], int length);    //存储多个字符串，存储单个字符串，长度

int main(void)
{
	extern int times;   //引用式声明
	extern int limit;   //引用式声明

	auto int length = 0;    //块作用域，无链接，自动存储期

	char * save[limit];     //存储多个字符串，变长数组，以变量代替维度

    puts("输入一个int代表数值元素个数");
	while( scanf("%d", &limit) == 1 )   //成功返回项数1
	{
		getchar();		// 丢弃刚才输入的回车键。

		printf("你输入的是%d\n", limit);
		for(int i = 0; i < limit; i++) //下标从0到limit-1
		{
			char array[lon] = {};		//内层块变量，离开包含它的for循环会自动释放，储存一个字符串，字节大小59
			for(int j = 0; j < lon; j++, length++)  //0 -58  length计算循环的次数
			{
				array[j] = getchar(); //读单个字符到程序

				if(array[j] == ' ' || array[j] == '\n') //元素是空格，或者换行符
				{
					// 把空格字符和回车符变成字符串末尾的\0空字符。
					// 再调用函数动态分配空间，用指针数组储存那块空间。
					array[j] = '\0';
					get1(save, array, length);         //把这个单词传入自定义函数(主函数字符串数组的地址，for循环存储单词char数组，以及这个单词的长度)
					printf("\nThe %d save is %s. \n", i, save[i]);
					break;
				}
				else
				{
					continue;
				}
			}

			length = 0;	// 我把length放入嵌套for的初始化语句，我的GCC会报错说未使用变量。。很诡异啊这个程序。
		}

		printf("Here are your words:\n");
		for(int i = 0; i < limit; i++)
		{
			printf("The local is %p .\n", &save[i]);
			printf("The value is %s\n", save[i]);
		}

		// 别忘了释放动态内存和重置。
		free(save);
		times = 0;
		limit = 0;

		printf("\nHow many words do you wish to enter(q to quit):");
	}
	printf("\nDone!\n");

	getchar();
	getchar();

	return 0;
}

void get1(char * p[limit], char array1[lon], int length)
{
	// 这个函数先动态分配一个跟读入单词一样长度的空间。
	// 再把临时char数组的内容赋值给动态分配的空间。
	// 再用指针数组储存那块空间。

	extern int times;
	extern int limit;

	char * temp = (char *) malloc( length * sizeof(char) );

	for(int i = 0; i <= length; i++)
	{
		temp[i] = array1[i];  //保存单词到动态分配char数组
	}

	printf("\nThe %d local is %p .\n", times, &p[times]);    //输出这个单词数量与地址

	p[times] = temp;  //再次保存单词

	times++;            //递增dime
    free(temp);
}
