#include<stdio.h>
long long jc(long long x)
{
	long long y=1;
	while(x>=1)
	{
	y=x*y;x--;
	}
	return y;
}
int main()
{
	long long n=1;
	long long sn=0;	
	scanf("%lld",&n);
		while(n>0)
		{
		sn+=jc(n);
		n--;
		//printf("%d\n",sn);
		}
	printf("%lld",sn);
}
