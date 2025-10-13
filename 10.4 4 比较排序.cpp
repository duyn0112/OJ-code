#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		int t = b; b = a; a = t;
	}
	if(b>c)
	{
		int t = c; c = b; b = t;
	}
	if(a>b)
	{
		int t = b; b = a; a = t;
	}
	printf("%d %d %d\n", a, b, c);
	return 0 ;
}
