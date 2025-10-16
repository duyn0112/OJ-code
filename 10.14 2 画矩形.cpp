#include<stdio.h>
int main()
{
	int i=1,j=1,q=1,p=1;
	while(i!=0||j!=0)
	{
		scanf("%d %d",&i,&j);
		for(int p=i;p>0;p--)
		{
			for(int q=j;q>0;q--)
			{
				printf("#");
			}
			printf("\n");
		}
	}
}
