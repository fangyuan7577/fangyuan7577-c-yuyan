#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(0));
	int a=rand();

	printf("%d\n",a);
	return 0;
}