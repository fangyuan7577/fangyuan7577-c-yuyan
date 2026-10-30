#include <stdio.h>
void sum(int begin,int end)//void 不返回函数
{
	int i;
	int sum =0;
	for (i =begin; i <=end; i++)
	{
		sum +=i;
	}
	printf("%d到%d的和是%dn",begin,end,sum);
}
int main(int argc, char const *argv[])
{
	sum(1,10);
	sum(20,30);
	sum(35,45);
	return 0;
}