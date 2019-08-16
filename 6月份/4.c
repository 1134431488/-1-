#include <stdio.h>
/* 标记的意义
包含成员的结构布局，这一整体需要一个标记来引用，或用一个变量名来引用，或者把这一整体用typedef定义为一种新类型。 
下方创建两个相同成员的结构布局，再用不同的标记去区分，虽然这样做显得多余，但是成员不同的情况下，不同的标记名称标明不同的数据类型。
标记是可选的声明，省略标记时说明结构仅可被一个变量引用。不能省略标记时又省略变量。省略标记必须要声明一个变量。 
有标记的结构布局，意味着可以在多个函数中使用此标记所表示的结构布局 。 
 */
struct a {
	char a;
	char b;
}; 

struct b {
	char a;
	char b;
};

int main(void)
{
	struct a aTest = {'a','b'};
	struct b bTest = {'c','d'};
	
	printf("a  %c %c\n", aTest.a, aTest.b);
	printf("b  %c %c\n", bTest.a, bTest.b);
	printf("%#X %#X\n", &aTest, &aTest.a);
	printf("%#X %#X\n", &bTest, &bTest.a);
	return 0;
}
