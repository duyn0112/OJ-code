#include<stdio.h>
int main()
{
	int m,n,r;
	scanf("%d %d",&m,&n);
	if(n>m)
	{
		int r=m;int m=n;int n=r;
	}
	//m>n
	int i=n,j=m; 
	while(1)
	{
		if(n%i==0&&m%i==0)
		break;
		else
		i--;
	}
		while(1)
	{
		if(j%n==0&&j%m==0)
		break;
		else
		j++;
	}
	printf("%d %d",i,j);
}
