#include <stdio.h>
int main()
{
	int n;
	float a=1.0000f,b=1.0000f,c=0.0000f,h=0.0000f;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	
		c=b;
		b=a+b;
		a=c;
		h+=b/a;
	}
		printf("%.2f\n",h);
}
