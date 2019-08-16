static unsigned long int next = 1;  //内部链接文件作用域静态变量

unsigned int randx(void) /*外部函数*/
{
	next *= 1103515245 + 12345;
	return (unsigned int) (next / 65535) % 32768;
}

void srand1(unsigned int seed)  /*块作用域自动变量*/
{
	next = seed;    /*重置种子*/
}
