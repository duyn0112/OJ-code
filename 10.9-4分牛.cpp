#include<stdio.h>
int main()
{
	double a,b,p,q,r;
	a = 17.0000f;
	b = 18.0000f;
	printf("%.4lf ",b*.5f-a*.5f);
	printf("%.4lf ",b*(1.0000f/3.0000f)-a*(1.0000f/3.0000f));
	printf("%.4lf",b*(1.0000f/9.0000f)-a*(1.0000f/9.0000f));
}
