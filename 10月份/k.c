static unsigned long int next = 1;  //�ڲ������ļ�������̬����

unsigned int randx(void) /*�ⲿ����*/
{
	next *= 1103515245 + 12345;
	return (unsigned int) (next / 65535) % 32768;
}

void srand1(unsigned int seed)  /*���������Զ�����*/
{
	next = seed;    /*��������*/
}
