#include<stdio.h>
#include<string.h>/*Ϊstrlen()�ṩԭ��*/
#define NAME "GIGATHINK, INC."//15�ַ� 
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
	int spaces;

	show_n_char('*',WIDTH);//40��*�� 
	putchar('\n');//�س� 
	show_n_char(SPACE, 12);//12���ո� 
	printf("%s\n",NAME);
	spaces = (WIDTH - strlen(ADDRESS)) / 2 ; /*����Ҫ�������ٸ��ո�*/
//  spaces = (40 - ��ȡ�ֿ�(�ַ���)) / 2 
	         show_n_char(SPACE, spaces);/*��һ��������Ϊ����*/
	printf("%s\n",ADDRESS);
	show_n_char(SPACE,(WIDTH - strlen(PLACE)) / 2);

	printf("%s\n",PLACE);
	show_n_char('*',WIDTH);//40��*�� 
	putchar('\n');

	return 0;
}
/*show_n_char()��������*/
void show_n_char(char ch, int num)
{
	int count;
	for(count = 1; count <= num; count++)
		putchar(ch);
}
