#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];
	scanf("%d",&x);
	while(x!=-1){
		number[cnt]=x;
		{
			int i;
			printf("%d\n",cnt );
			for (int i = 0; i <=cnt;i++)
			{
				printf("%dt",number[i]);
			}
			printf("\n");
		}
		sum +=x;
		cnt ++;
		scanf("%d",&x);	
	}
	if (cnt>0)
	{
		printf("%f\n",sum/cnt );
		int i;
		//遍历数组
		for (int i = 0; i < cnt; i++)
		{
			if (number[i]>sum/cnt)
			{
			printf("%d\n",number[i] );
			}
		}
		//
	}
	return 0;
}