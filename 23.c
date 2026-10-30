#include <stdio.h>
void sum(int a,int b);//声明
int main(int argc, char const *argv[])
{
	sum(12,34);
	sum(45,67);
	return 0;
}
void sum(int a,int b){
	int i;
	i=a+b;
	printf("%d\n",i );
}