#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	srand(time(0));
	int number=rand()%100+1;
	int count=0;
	int a;
	printf("我已经想好了一个1到100的数：");
	do{
		printf("请猜一猜这个1到100之间的数：");
		scanf("%d",&a);
		count++;
		if(a>number){
			printf("你猜的数大了。");
		}else if (a<number)
		{
			printf("你猜的数小了。");
		}
	}while(a !=number);
	printf("太好了，你猜对了正确答案%d\n。",a);
	return 0;
}
