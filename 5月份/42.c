#include <stdio.h>
#include <stdlib.h>
struct mystruct
{
	int i;
	char cha;
};

int main(void)
{
	FILE * stream;
	struct mystruct s;
	if((stream = fopen("TEST.$$$", "wb")) == NULL)
	{
		fprintf(stderr, "Cannot open output file.\n");
		exit(EXIT_FAILURE);
	}
	s.i = 0;
	s.cha = 'A';
	fwrite(&s, sizeof(s), 1, stream);	//��1��s�ṹ���С������д���ļ�
	fclose(stream);	//�ر��ļ�
	return 0;
}
