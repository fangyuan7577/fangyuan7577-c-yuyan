#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	int sun=0;
	int count=0;

	
	scanf("%d",&number);
	while(number!=-1)
	{
		sun+=number;
		count++;
		scanf("%d",&number);
	}
	
	printf("%f\n",1.0*sun/count );
	return 0;
}