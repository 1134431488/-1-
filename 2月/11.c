#include <stdio.h>
#include <conio.h>
int main(void)
{
	printf("��������СΪ%d�ֽ�\n", BUFSIZ);   //�����������С
	char ch;
	while(ch = getche()) //����ȴ����з����ɱ�putcharʹ��ch
		putchar(ch);
	return 0;
}
