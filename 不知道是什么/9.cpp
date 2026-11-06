#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	int b;
	int t;
	printf("«Î ‰»Î£∫");
	scanf("%d %d",&a,&b); 
	
	t=a;
	a=b;
	b=t;
	printf("a=%d,b=%d\n",a,b );
	return 0;
}
