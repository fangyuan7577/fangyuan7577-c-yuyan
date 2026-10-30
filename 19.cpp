#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	x=12345;
	int dight;
	int ret=0;

	while (x>0){
		dight =x%10;
		ret =ret*10+dight;
		printf("x=%d,dight=%d,ret=%d\n",x,dight,ret );
		x/=10;
	}
	printf("%d\n",ret );
	return 0;
}