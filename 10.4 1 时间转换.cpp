#include<stdio.h>
int main()
{
	int sj;
	int h = 0,m = 0;
	scanf("%d",&sj);
	while(sj>=3600)
	{
		sj = sj-3600;
		h++;
	}
	while(sj>=60)
	{
		sj = sj-60;
		m++;
	}
	printf("%d:%d:%d",h,m,sj);
	return 0;
 } 
