#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect
{
	char fname[NLEN];
	char lname[NLEN];
	int letters;
};

struct namect getinfo(void);
struct namect makeinfo(struct namect);
void showinfo(struct namect);
char * s_gets(char * st, int n);

int main(void)
{
	struct namect person;

	person = getinfo();			/* �õ��������ؽṹ��ֵ */
	person = makeinfo(person);	/* ����ṹ�帱�����������ش����Ľṹ�� */
	showinfo(person);			/* ����ṹ�帱�� */

	return 0;
}
struct namect getinfo(void)
{
	struct namect temp;
	printf("Please enter your first name.\n");
	s_gets(temp.fname, NLEN);
	printf("Please enter your last name.\n");
	s_gets(temp.lname, NLEN);

	return temp;				/* ����һ���ṹ�� */
}

struct namect makeinfo(struct namect info)
{
	info.letters = strlen(info.fname) + strlen(info.lname);	/* ����1������2���ַ����ȣ����ַ�û�г��Ȳ��������� */
	return info; 				/* ����һ���ṹ�� */
}

void showinfo(struct namect info)
{
	printf("%s %s��your name contains %d letters.\n",		/* �������ְ���%d����ĸ */
	       info.fname, info.lname, info.letters);
}
char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n , stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;		/*����(��ȥ)�������е�ʣ���ַ�*/
	}
	return ret_val;
}
