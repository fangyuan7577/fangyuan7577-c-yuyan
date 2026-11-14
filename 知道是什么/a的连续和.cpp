#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a,n;
	scanf("%d %d",&a,&n);

	int sum=0;
	int i;
	int y=0;

	for (int i = 0; i < n; ++i){
		t=t*10+a;
		sum+=t;
	}
	printf("%d\n",sum );
	return 0;
}