#include <stdio.h>

int main(int argc, char const *argv[])
{
	unsigned char c=255;
	int i=255;
	printf("c=%d,i=%d\n",c,i );
	//char 1字节 short 2字节 int取决于编译器CPU通常为1
	//long 4字节 longlong 8字节 
	//char -128 127
	//unsigned 0 255

	return 0;
}