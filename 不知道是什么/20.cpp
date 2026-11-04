#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;

	x=2;
	int cnt;
	for (x=2; x<100; x++)
	{
		int i;
		int isPrime=1;
		for(i=2;i<x;i++){
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
		if(isPrime==1){
			printf("%d\n",x );
			cnt++;
		}
	}
	printf("\n");
	return 0;
}