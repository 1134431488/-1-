#include <stdio.h>//标准输入输出头文件
#define MSG "I am a sy."//常量 字符串
#define MAX 81//常量 整数81
int main(void)//函数定义
{
	float shoe = 2.0;
	while(++shoe < 18.5)//先递增shoe的值 再比较条件
	{
		printf("%f\n", shoe);
	}
	//块开始
	char words[MAX] = "IIII";//字符串数组
	const char *pt1 = "SOOO";//字符串指针-只读字符类型
	puts("HHHH");//输出一个常量字符串
	puts(MSG);//输出一个常量地址
	puts(words);//输出数组名地址
	puts(pt1);//输出一个指针地址
	words[2] = 'p';//修改数组元素3
	puts(words);//输出被修改的数组
	printf("输出字符串:%s \n输出地址:%#X\n输出字符:%c\n", "III", "III", *"III");
	//除法运算:截断
	printf("5/4 = %d\n", 5 / 4);
	printf("6/3 = %d\n", 6 / 3);
	printf("7/4 = %d\n", 7 / 4);
	printf("7./4. = %1.2f\n", 7. / 4.);
	printf("7./4 = %1.2f\n", 7. / 4);
	printf("6/2*3 = %d\n", 6 / 2 * 3);
	printf("%d\n", -(2+5)*6+(4+3*(2+3)));
	//新的C编译器是可以在任意位置声明变量
	long num;//未初始化
	long sum = 0L;//带L后缀的long类型声明
	_Bool input_is_good;//布尔类型

	input_is_good = (scanf("%ld", &num) == 1);//成功就返回项数，对num赋值
	while(input_is_good)//为0则假为1则真
	{
		//块开始
		sum += num;//sum 加上右侧最终的结果
		input_is_good = (scanf("%ld", &num) == 1);//成功就返回项数
	}//块结束
	printf("%d\n", sum);//输出结果
	//平方乘法
	num = 1;
	while(num < 21)
	{
		printf("%4d %6d\n", num, num * num);
		num = num + 1;
	}
	return 0;//程序返回
}//块结束
