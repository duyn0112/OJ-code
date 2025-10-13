#include<stdio.h>
int main()
{
	int i,j=1;
	scanf("%d",&i);
	while(i)
	{
		printf("Case %d: %d\n",j,i);
		j++;
		scanf("%d",&i);
	}
}
