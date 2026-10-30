#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a;
	a=6;
	printf("sizeof(int)=%ld\n",sizeof(int) );
	printf("sizeof(double)=%ld\n",sizeof(double));
	int i=0;
	printf("0x%x\n",&i );
	printf("%p\n",&i );
		return 0;

}