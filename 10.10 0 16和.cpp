#include<stdio.h>
int main()
{
	long long a,b;
	while(1)
	{
	int pd = scanf("%llx %llx",&a,&b);
    if(pd == EOF)break;
	printf("%llx\n",a+b);
	}
}
