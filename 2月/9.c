#include <stdio.h>
#include <stdlib.h>
#define fname "name"
int main(void)
{
	FILE *fp = fopen(fname, "w+");
	char ch;
	char *cm;
	fputs("9999", fp);
//	rewind(fp);
//	fseek(fp, 0L,SEEK_SET);
	fpos_t pos;
	fgetpos(fp, &pos);
	pos = (fpos_t)0;
	fsetpos(fp, &pos);
	printf("当前position = %ld\n此字符是", ftell(fp));
	ch = getc(fp);  //获取一个字符
	putc(ch, stdout);

	printf("\ndone!\n");
	fclose(fp);
	remove(fname);
	return 0;
}
