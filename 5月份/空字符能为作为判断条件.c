#include <stdio.h>
int main(void)
{
	const char ch[10] = "aaaa";
	int n = 0;
	while(ch[n])
	{
		printf("%c\n",ch[n++]);
	}
	printf("��n = %d��ʱ��ֹͣ\n", n); 
	printf("ch[%d] = %s\n",n , ch[n]);
	return 0;
}
