#include <stdio.h>
void f(int*p);
void g(int k);

void f(int*p){/*这里的是将&i导入了p里，*仅作类型标记*/
	printf("p=%p\n",p );/*出地址*/
	printf("*p=%d\n",*p );/*出值*//* （* 解引用运算符）*/
	// *p=26;
}
void g(int k){
	printf("k=%d\n",k );
}
int main(int argc, char const *argv[])
{
	int i=6;
	printf("&i=%p\n",&i );
	f(&i);/*传地址*/
	g(i);/*传值*/

	return 0;
}
