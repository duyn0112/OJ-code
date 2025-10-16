#include<stdio.h>
int main()
{
	int x=152;
	while(x<1000)
	{
		int a=(x-x%100)/100;int b=(x-100*a-x%10)/10; int c=x-100*a-10*b;
		if(a*a*a+b*b*b+c*c*c==x)
		printf("%d\n",x);
		x++;
	}
	
} 
