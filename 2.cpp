#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
	printf("%d+%d=%dn",a,b,a+b);
	return 0;
}