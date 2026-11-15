#include <stdio.h>
//函数头 void ...(int ...,int ...)void可以没有return int有return
//函数体{...}
int max(int a,int b){
	int ret;
	if (a>b)
	{
		ret=a;
	}else{
		ret=b;
	}
	printf("%d比较大。\n",ret);
}
int main(int argc, char const *argv[])
{
	max(3,4);
	max(56,78);
	return 0;
}