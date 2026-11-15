#include <stdio.h>
int main(int argc, char const *argv[])
{
	void f(const int* x); // 函数接收一个指向 const int 的指针，意味着函数内部不能通过 x 修改它指向的值
	int a = 15;
	f(&a); // ok。将 int* 转换为 const int*，这是安全的（只加了只读限制）
	const int b = a; // ok。用非 const 变量初始化 const 变量是允许的

	f(&b); // ok。b 本身就是 const int，传给 const int* 完全匹配
	b = a + 1; // Error! 错误。b 被声明为 const，不能再被赋值修改
	return 0;
}