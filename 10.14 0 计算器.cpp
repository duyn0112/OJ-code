#include<stdio.h> 
int main()
{
	double a,b;
	printf("简单计算器,格式:数字运算符(+-*/)数字\n若输入不合规字符,程序结束\n");
	char cz;
	while(1)
	{	
		int q = scanf("%lf%c%lf",&a,&cz,&b);
		if(q==0) 
		{
			printf("不合规字符,程序结束\n");
			break;
		}
		if(cz=='+') printf("%.4lf\n",a+b);
		if(cz=='-') printf("%.4lf\n",a-b);
		if(cz=='*') printf("%.4lf\n",a*b);
		if(cz=='/') printf("%.4lf\n",a/b);
	}
}
