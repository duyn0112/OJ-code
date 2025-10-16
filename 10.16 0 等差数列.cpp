#include <stdio.h>
int main()
{
	double m,n;
	scanf("%lf %lf",&m,&n);
	double a=m,b=m;
	for(double i=0;i<n;i++)
	{
		a=a/2.0000f;
		b+=2.0000f*a;
	}
	b=b-2.0000f*a;
	printf("%.2lf %.2lf",a,b);
}
