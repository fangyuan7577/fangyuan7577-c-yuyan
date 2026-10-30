#include <stdio.h>
int isprime(int x){
	int ret;
	int i;
	if (x==1||
		(x%2==0&&x!2))
	ret=0;
	for (int i = 3; i <x; i+=2)
	{
		if (x%i==0)
		{
			ret=0;
			break;
		}
	}
	return ret;
	
}
int main(int argc, char const *argv[])
{
	
	return 0;
}