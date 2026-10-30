#include <stdio.h>

int main(int argc, char const *argv[])
{
	char c;
	char d;
	c=1;
	d='A';//ASCll码A=65
	//scanf("%d %d\n",&c,&d);
	if (c==d)
	{
		printf("相等\n");
	}else{
		printf("不相等\n");
	}
	printf("c=%d\n",c );
	printf("d=%d\n",d );
	return 0;
}