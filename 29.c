#include <stdio.h>
int main(int argc, char const *argv[])
{
	const int number=10;
	int x;
	int count[number];
	int i;

	for (int i = 0; i < number; i++)
	{
		count[i];
	}
	scanf("%d",&x);
	while(x!=-1){
		if (x>=0 && x<=9)
		{
			count[x]++;
		}
		scanf("%d",&x);
	}
	for (int i = 0; i < number; i++)
	{
		printf("%d:%d\n",i,count[i] );
	}
	return 0;
}