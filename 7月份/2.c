#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS	10	/* 最大书籍数量 */
char * s_gets(char * st, int n);
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library[MAXBKS];	/* 	结构数组 */
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);

	if((pbooks = fopen("book.dat", "a+b")) == NULL)
	{
		fputs("无法打开book.dat文件.\n", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(pbooks);	/* 定位到文件开始 */
	while(count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)	//读取文件内容到结构
	{
		if(count == 0)
			puts("当前图书目录:");
		printf("%s by %s:$%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}
	filecount = count;
	if(count == MAXBKS)
	{
		fputs("这本书的dat文件已满.", stderr);
		exit(2);
	}

	puts("请增加新书的书名.");
	puts("按一行开始处的[enter]键停止.");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		puts("现在输入作者.");
		s_gets(library[count].author, MAXAUTL);
		puts("现在输入价格.");
		scanf("%f", &library[count].value);
		count++;
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			puts("现在输入书名.");
	}
	if(count > 0)
	{
		puts("这是你的书单:");
		for(index = 0; index < count; index++)
			printf("%s by %s:$%.2f\n", library[index].title, library[index].author, library[index].value);
			fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else
		puts("No books? Too bad.\n");
	puts("Bye.\n");
	fclose(pbooks);	//释放文件指针 
	
	return 0;
}

char * s_gets(char * st, int n)
{
	char * r;
	char * f;
	r = fgets(st, n, stdin);
	if(r)
	{
		f = strchr(st, '\n');
		if(f)
			*f = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return r;
 } 
