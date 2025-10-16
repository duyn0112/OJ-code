#include<stdio.h>
int main()
{
	int i=1,j=1;
	while(1)
	{
		if(i==0&&j==0)
        break;
		scanf("%d %d",&i,&j);
		for(int q=j;q>0;q--)
			{
				printf("#");
			}
		printf("\n");
		for(int p=i-2;p>0;p--)
		{
			printf("#");
			for(int q=j-2;q>0;q--)
			{
				printf(".");
			}
			printf("#\n");
		}
		for(int q=j;q>0;q--)
			{
				printf("#");
			}
			printf("\n");
	}
}
