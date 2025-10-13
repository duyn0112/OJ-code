#include <stdio.h>
int main()
{
	int a,b,c,i = 0;
	scanf("%d %d %d",&a,&b,&c);
	for(int n = a;n<=b;n++)
	{
		if(c%n == 0)
		{
		i++;
		}
	}
	printf("%d",i);
}
