//逻辑非 !a >逻辑与 a&&b >逻辑或 a||b
#include <stdio.h>
int int main(int argc, char const *argv[])
{
	count =(count>20)?count-10:count+10;
	if (count >20)
	{
		count = count-10
	}else
	count = count+10;
	//for中可使用逗号表达式
	int i;
	i=3+4,5+6;
	int a;
	a=(3+4,5+6);

	printf("%d\n",i );
	return 0;
}