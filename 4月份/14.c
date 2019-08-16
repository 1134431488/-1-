#include <stdio.h>
#include <string.h>

#define NLEN 30
struct namect {
	char fname[NLEN];	/* first name */
	char lname[NLEN];	/* last name */
	int letters;	/* 字母 */
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char * s_gets(char * st, int n);

int main(void) {
	struct namect person;	/*人*/

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	return 0;
}

void getinfo(struct namect * pst) {
	printf("请输入第一位名称:\n");
	s_gets(pst->fname, NLEN);
	printf("请输入第二位名称:\n");
	s_gets(pst->lname, NLEN);
}

void makeinfo(struct namect * pst) {
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst) {
	printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

char * s_gets(char * st, int n) {
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);	/*从键盘输入流获取输入*/
	if(ret_val) {
		find = strchr(st, '\n');	/*查找换行符*/
		if(find)
			*find = '\0';
		else
			while(getc(stdin) != '\n')
				continue;
	}
	return ret_val;
}
