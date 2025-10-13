#include<stdio.h>
#include<math.h>
long long cf(long long x)
{
	int y=0,q;
	while(x>=1)
	{
		q=2*pow(10,x-1);
		y+=q;x--;
	}
	return y;
}
int main()
{
	long long n=1;
	long long sn=0;	
	scanf("%lld",&n);
		while(n>=1)
		{
		sn+=cf(n);
		n--;
		//printf("%d\n",sn);
		}
	printf("%lld",sn);
}
