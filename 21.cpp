#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	a=6;
	printf("sizeof(double)=%d\n",sizeof(double) );
	printf("sizeof(a+1.0)=%d\n",sizeof(a+1.0) );
	printf("a=%d\n",a );
	return 0;
}