#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31
void fund(int p[], int n); 
/* ʲô�Ǹ�����������������Ϊ����: ������������ ���� ���� һ�Ի������������ĳ�ʼ���б���ɡ�����д��ʶ��
   ���鸴����������(int [4]) {20,20,20,20} 
   ��ʼ�������������������ʡ�Է�����������Ĵ�С������������Ҳ������������ 
   ���������Զ���������Ĵ�С�����Ǳ���������ͬ���͵�ָ��ָ�������������������:
   int * p;		// ����������Ϊֻ����������ָ��������ַ��ֻ��ʹ��ָ�롣���Ǻ����βΣ���������Ϊp[] ,������Ȼ�ȼ�ָ�룬����8�ֽڵ��β� 
   p = (int [])	 {10,10,10};	//��ϸ���ᷢ�� (int []) ��һ��Բ�������������������һ����ʼ����������������ģ����봴��ͬʱʹ���� 
   ���Ͼ�������ĸ�����������"����" ���� ��ָ ����� ��ĳ��ԭ���������� 
   �ṹ�帴��������: (struct ���) {10, "ABC", 0.888} 
   �����鸴����������������Բ���������ͺ������ǲ�һ���ģ���ͬ���ʼ���б�����һ�Ի��������������Զ��ŷָ����Ҷ��������ģ����봴��
   ͬʱʹ����, ������ֱ�ӶԽṹ�帳ֵ:
   struct book library;		//��������ṹ���Ա��1��int��1��char���飬1��float 
   library = (struct book)  {999, "ABCD", 9.88888}; 
 */
struct book
{
	char title [MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book readfirst;	/* read first ����һ�� */
	int score;	 /* �ɼ� */
	printf("Enter test score:"); 	/* ������Գɼ� */
	scanf("%d", &score);
	if(score >= 84)
		readfirst = (struct book)	{"Crime and Punshment","Fyodor Dostoyevsky",11.25};	/* �����������������ģ������ڴ�����ͬʱʹ�� */
	else
		readfirst = (struct book)	{"Mr. Bouncy's Nice Hat", "Fred Winsome", 5.99};
		
	printf("Your assigned reading:\n");
	printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);
	/* ��������ĸ��������� */
	int *p; 
	p = (int [4])	{1, 2, 3, 4};
	for(int n; n < 4; n++)
	printf("p[%d] = %d\n", n, p[n]); 
	/* ������ĸ������������뺯��������� */
	fund((int []) {1,2,3,4}, 4);
	
	return 0;	 
}

void fund(int p[], int n)
{
	for(int i = 0; i < n; i++)
		printf("p[%d] = %d\n", i, p[i]);
		
	p = (int []) {6, 7, 8, 9};
	for(int i = 0; i < n; i++)
		printf("p[%d] = %d\n", i, p[i]);
	if(sizeof(p) == 8)	
		printf("�����βε�p����һ�������������һ��%d�ֽڵ�ָ�롣", sizeof(p));
	else
		puts("�����βε�p��һ����������飬������ǵ�����������ָ���ĵ�ַ");
}
