#include <stdio.h>
#define LEN 20
const char * msgs[5] =
{
	"	Thank you for the wonderful evening, ",	/*лл������ʢ����, ����*/
	"You certainly prove that a ",				/*�㵱Ȼ֤���ˣ�*/
	"is a special kind of guy. We must get together",	/*��һ��������ˡ����Ǳ������һ��*/
	"over a delicious ",						/*��һ����ζ�ģ�*/
	" and have a few laughs"					/*Ȼ�󿪻���Ц*/
};

struct names
{
	char first[LEN];	/*��һ*/
	char last[LEN];		/*���*/
};

struct guy
{
	struct names handle;	/*Ƕ�׽ṹ*/
	char favfood[LEN];		/*��ϲ����ʳ��*/
	char job[LEN];			/*����*/
	float income;			/*����*/
};

int main(void)
{
	struct guy fellow =	/*����*/
	{
		{"Ewen", "Villard"	/*���ģ� ά����*/},
		"grilled salmon",	/*�� ����*/
		"personality coach",	/*Ʒ�� ָ��*/
		68112.00				/*����*/
	};

	printf("Dear %s, \n\n", fellow.handle.first);	/*�װ��İ���*/
	printf("%s%s.\n", msgs[0], fellow.handle.first);	/*лл������ʢ�������ȶ���*/
	printf("%s%s\n", msgs[1], fellow.job); 	/*�㵱Ȼ֤����һλ���Խ���*/
	printf("%s\n", msgs[2]);	/*��һ��������ˡ� ���Ǳ������һ��*/
	printf("%s%s%s", msgs[3], fellow.favfood, msgs[4]);	/*һ��������ζ�Ŀ������㣬һ�߿�����Ц��*/
	if(fellow.income > 150000.0)
		puts("!!");
	else if(fellow.income > 75000.0)
		puts("!");
	else
		puts(".");
	printf("\n%40s%s\n", " ", "See you soon,");	/*�ܿ������,*/
	printf("%40s%s\n", " ", "Shalala");			/*ɯ����*/

	return 0;
}
