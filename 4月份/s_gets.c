#include <stdio.h>
char *s_gets(char *st, int n);
int main(void)
{
	int k = 3;
	char stq[80] = "asdasdasdasd";
	printf("%s", s_gets(stq, k)) ;
	
//	printf("主函数的stq地址为%#X\n",stq);
}
char *s_gets(char *st, int n)
{
	char *ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);//fgets()返回的是st的地址
	if(ret_val)//即，ret_val != NULL
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	printf("st地址为%#X\n",st);
	return ret_val;//只返回指定尺寸的数据 
}
