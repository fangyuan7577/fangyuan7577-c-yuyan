#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;

	scanf("%d",&n);
	int fact=1;

	int i=1;
//for(初始条件；循环条件；循环动作)
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("%d!=%d\n",n,fact);
	return 0;
}