#include <stdio.h>
#include <stdlib.h>
//�÷�����CMD����������·�����򿪴��ļ������exe�ļ������¿ո��������ڶ����ַ�����
//�ڶ����ַ���������Ҫ�򿪵��ļ������Զ�ȡ�ļ�����Ϣ������������
int main(int argc, char * argv [])  //windows�û���Ҫ����������ʾ�������иó���
{
	int ch;         //��ȡ�ļ�ʱ�������ļ���Ϣ��ÿ���ַ��ģ��ط�
	FILE *fp;       //�ļ�����ָ�����fp
	unsigned long count = 0;        //�޷��ų���������

	if(2 != argc)   //�ж��β�
	{
		printf("Usage: %s filename\n", argv[0]);//���һ��argv����Ԫ��
		exit(EXIT_FAILURE); //�����쳣��ֹ
	}
	if(NULL == (fp = fopen(argv[1], "r")))      //��ֻ������ʽ��argv�ڶ���Ԫ���ַ���, fopenû�д򿪳ɹ��򷵻ؿ�ָ��
	{
		printf("Can't open %s\n", argv[1]); //�������ļ�����Ҳ����DOS��ȡ�ĵڶ����ַ���
		exit(EXIT_FAILURE);
	}
	while(EOF != (ch = getc(fp)))   //��fpָ���ȡ���ַ���������ch����ASCII 10���Ʒ�ʽ����chΪEOF��Ϊ�ļ�ĩβ��chΪ0���
	{
		putc(ch, stdout);//��putchar(ch)����ͬ���ڶ���������ָ��ch��Ϣ���ַ���ʽ�����stdout����������Ļ��
		count++;
	}

	fclose(fp);//��һ���ļ��ͱ���ر�������fopen��Ӧ�Ĺرպ�����������fopen���ص��ļ�ָ��
	printf("File %s has %lu characters\n", argv[1], count);//����ڶ����������Լ��ַ�������

	return 0;
}
