#include <stdio.h>

int main(int argc, char const *argv[])
{
	//short %hd int %d long long %ld
	printf("%d\n",(short)32768 );//变负值
	printf("%d\n",(char)32768 );//0
	return 0;
}