#include <stdio.h>
int inprime(int x,int knownPrimes[],int numberOfKnownPrimes);
int main(int argc, char const *argv[])
{
	const int number=10;
	int prime[number]={2};
	int count=1;
	int i=3;

	while(count<number){
		if (isPrime(i,prime,count))
		{
			prime[count++]=i;
		}
		{
			printf("i=%d\t cnt=%d\t",i,cnt );
		}
		i++;
	}
	for (int i = 0; i < number; i++)
	{
		printf("%d",prime[i] );
		if ((i+1)%5){
			printf("\t");
		}else printf("\n");
	}
	return 0;
}
int isPrime(int x,int knownPrimes[],int numberOfKnownPrimes){
	int ret=1;
	int i;
	for (int i = 0; i < numberOfKnownPrimes; i++)
	{
		if (x%knownPrimes[i]==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
}