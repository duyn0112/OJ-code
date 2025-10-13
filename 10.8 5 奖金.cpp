#include<stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d",&x) ;
	if(x<=100000)
	y=x*0.1f;
	else if(x>100000&&x<=200000)
	y=(x-100000)*0.075f+10000;
	else if(x>200000&&x<=400000)
	y=(x-200000)*0.05f+17500;
	else if(x>400000&&x<=600000)
	y=(x-400000)*0.03f+27500;
	else if(x>600000&&x<=1000000)
	y=(x-600000)*0.015f+33500;
	else if(x>1000000)
	y=(x-1000000)*0.01f+39500;
	printf("%.0f",y);
}
