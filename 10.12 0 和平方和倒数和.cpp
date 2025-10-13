#include<stdio.h>
int main()
{
	double a,b,c,h=0,pfh=0,dsh=0;
	scanf("%lf %lf %lf",&a,&b,&c);
	for(double i=1;i<=a;i++)
	h+=i;
	for(double i=1;i<=b;i++)
	pfh+=i*i;
	for(double i=1;i<=c;i++)
	dsh+=1/i;
	printf("%.2lf",h+pfh+dsh);
} 
