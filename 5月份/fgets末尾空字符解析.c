#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch[5];
	while(fgets(ch, 5, stdin) != NULL && ch[0] != '\n')//�˴��벻���ƣ�û����ȥfgets()ĩβ�Ļ��з� 
	{
		printf("ch[0]=[%c]", ch[0]);
		printf("ch[5]=[%c]", ch[5]);
		printf("ch=[%s]", ch);
		putchar('\n');
	}
	puts("fgets()��ȡ�ַ�����ĩβ�ӿ��ַ�\n���ǵ���ӡ���һ���ַ����ǲ���������ַ�"); 
	puts("fputs()���γ���һ������ò�ư������ַ���ƴ����������ʵ���������һ���ַ����ĵ�ʱ��������ַ�");
//	system("pause");
	return 0;
}
