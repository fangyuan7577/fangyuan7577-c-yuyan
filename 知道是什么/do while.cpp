#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	int n = 0;
	scanf("%d",&x);
	do
	{
		x /=10;
		n ++;
	}while(x>0);
	printf("%d",n );
	return 0;
}