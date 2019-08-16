#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000
int main(void)
{
	double numbers[ARSIZE];
	double value;
	const char * file = "numbers.dat";
	int i;
	long pos;
	FILE *iofile;
	
	//����һ�� double ���͵�ֵ
	for(i = 0; i < ARSIZE; i++)
	{
		numbers[i] = (100.0 * i) + (1.0 / (i + 1));
		printf("%lf\n", numbers[i]);
	}
	//���Դ��ļ�
	if((iofile = fopen(file, "wb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for output.\n", file);
		exit(EXIT_FAILURE);
	}
	//�Զ����Ƹ�ʽ������д���ļ�
	fwrite(numbers, sizeof(double), ARSIZE, iofile);
	fclose(iofile);
	if((iofile = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr,
		        "Could not open %s for random access.\n", file);
		exit(EXIT_FAILURE);
	}
	//���ļ��ж�ȡѡ��������
	printf("Enter an index in the range");
	while(scanf("%d", &i) == 1 && i >= 0 && i < ARSIZE)
	{
		pos = (long) i * sizeof(double);	//����ƫ��������Ϊ�ļ��д洢����double���飬���һ��ƫ��double����
		//�����ļ�����Unicode ˫�ֽڣ�iӦ�ó���2���ֽڣ�����������ƫ�Ʋ���
		fseek(iofile, pos, SEEK_SET);	//��λ���˴�
		fread(&value, sizeof(double), 1, iofile);
		printf("The value there is %lf.\n", value);
		printf("Next index (out of range to quit):\n");
	}
	fclose(iofile);
	puts("Bye!");

	return 0;
}
