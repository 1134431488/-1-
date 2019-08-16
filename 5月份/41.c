#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main(void)
{
	double numbers[ARSIZE];	//����һ��1000��Ԫ�ص�double���͵�����
	double value;	//����һ��double���͵ı���
	const char * file = "numbers.dat";	//����һ��ֻ���ַ���ָ��
	int i;
	long pos;
	FILE * iofile;

	for(i = 0; i < ARSIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);

	if((iofile = fopen(file, "wb")) == NULL)
		fprintf(stderr, "Could not open %s for output.\n", file), exit(EXIT_FAILURE);

	fwrite(numbers, sizeof(double), ARSIZE, iofile);	//���1000��double�����ֽڴ�С��numbers���ļ���
	//numbers��һ��double���飬���������ɵ�ַ���� 
	fclose(iofile);
	if((iofile = fopen(file, "rb")) == NULL)
		fprintf(stderr, "Could not open %s for output.\n", file), exit(EXIT_FAILURE);
	
	printf("����0 - %d������\n", ARSIZE - 1);
	while(scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long) i * sizeof(double);	//һ��double�ֽڿ��
		fseek(iofile, pos, SEEK_SET);	//��λ��iofile�ļ���ʼ����ƫ��pos���ֽ�
		fread(&value, sizeof(double), 1, iofile);
		printf("����ֵ�� %f.\n", value); 
		printf("������һ������:\n");
	}
	fclose(iofile);
	puts("Bye!");
	
	return 0;
}
