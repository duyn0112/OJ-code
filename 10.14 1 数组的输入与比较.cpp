#include<stdio.h>
int main()
{
	long n;
	scanf("%ld",&n);
	long arr[n];
	for(long i =0;i<n;i++)
	scanf("%ld",&arr[i]);
	long max = arr[0],min = arr[0],sum=0;
	for(int i =0;i<n;i++)
	{
		if(arr[i]>max)max = arr[i];
		if(arr[i]<min)min = arr[i];
		sum+=arr[i];
	}
	printf("%ld %ld %ld",min,max,sum);
}
