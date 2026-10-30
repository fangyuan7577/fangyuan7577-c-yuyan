#include <stdio.h>//无法调换a，b的值
void swap(int a,int b);//形参

int main()
{
	int a=5;
	int b=6;
	swap(a,b);//实参
	printf("a=%d,b=%d\n",a,b );	
	return 0;
}

void swap(int a,int b){//形参
	int t=a;
	a=b;
	b=t;
}//c语言只有传值