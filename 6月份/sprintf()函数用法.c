#include <stdio.h>
#define MAX 20
char *s_gets(char *st, int n);
int main(void)
{
	char first[MAX];//first[20]
	char last[MAX];//lasr[20]
	char formal[2 * MAX + 10];//formal[2 * 20 + 10 = 50]
	double prize;

	puts("Enter your first name:");
	s_gets(first, MAX);//获取字符串到数组first中，获取长度为MAX
	puts("Enter your last name:");
	s_gets(last, MAX);
	puts("Enter your prize money:");
	scanf("%lf", &prize);//获取一个浮点数到prize当中，采用的是lf 长浮点数格式double
	sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);//字符串存储在了formal中，没有在屏幕输出 
	puts(formal);//输出存储在formal数组中的字符串 

	return 0;
}
char *s_gets(char *st, int n)//参数1字符类型指针st，整数n 
{
	char *ret_val;//字符类型指针 
	int i = 0;//整数i 

	ret_val = fgets(st, n, stdin);//从键盘stdin中获取指定n数量的字符到st地址中，这个st指向必须是可修改 
	if(ret_val)//判断fgets的返回值，如果不为NULL则成功获取到有效的字符串 
	{
		while(st[i] != '\n' && st[i] != '\0')//遍历这个字符串的字符部分 
			i++;
		if(st[i] == '\n')//遇到换行符就替换成空字符 
			st[i] = '\0';
		else
			while(getchar() != '\n')//不是字符也不是换行符我们就不停的continue跳过 
				continue;//跳转到循环的开头 
	}
	return ret_val;//函数的 结尾 返回这个char指针 
}
