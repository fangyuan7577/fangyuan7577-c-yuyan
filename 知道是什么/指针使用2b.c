#include <stdio.h>

/*
@return 如果除法成功，返回1；否则返回0
*/
int divide(int a,int b,int *result);

int main(int argc, char const *argv[])
{
	int a;
	int b;
	int c;
	scanf("%d %d",&a,&b);
	if (divide(a,b,&c))
	{
		printf("%d/%d=%d\n",a,b,c );
	}
	return 0;
}
int divide(int a,int b,int *result){
	int ret=1;
	if (b==0){
		ret=0;
		printf("失败\n");
	}else{
		*result=a/b;
		printf("成功\n");
	}
	return ret;
}