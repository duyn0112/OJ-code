#include<stdio.h> 
int main()
{
	double a,b;
	printf("�򵥼�����,��ʽ:���������(+-*/)����\n�����벻�Ϲ��ַ�,�������\n");
	char cz;
	while(1)
	{	
		int q = scanf("%lf%c%lf",&a,&cz,&b);
		if(q==0) 
		{
			printf("���Ϲ��ַ�,�������\n");
			break;
		}
		if(cz=='+') printf("%.4lf\n",a+b);
		if(cz=='-') printf("%.4lf\n",a-b);
		if(cz=='*') printf("%.4lf\n",a*b);
		if(cz=='/') printf("%.4lf\n",a/b);
	}
}
