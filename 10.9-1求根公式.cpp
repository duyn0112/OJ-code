#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2;
	scanf("%lf %lf %lf",&a,&b,&c);
	x1=((-b+sqrt(-4*a*c+b*b)))/2*a;
	x2=((-b-sqrt(-4*a*c+b*b)))/2*a;
	if(x1>x2)
	printf("r1=%.2lf\nr2=%.2lf",x1,x2);
	if(x1<x2)
	printf("r1=%.2lf\nr2=%.2lf",x2,x1);
}
