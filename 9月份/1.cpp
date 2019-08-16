#include <iostream>
using namespace std;
int main(void)
{
    char a;
	char &b = &a;
	
	cout<<"sizeof(b)="<<sizeof(b)<<endl;
	cout<<"sizeof(b)="<<sizeof(a)<<endl;

	return 0;
}
