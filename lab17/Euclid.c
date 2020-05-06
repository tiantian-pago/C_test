#include<stdio.h>

int gcd(int a,int b)
{
	int r;

	if(a>b)
	{
		while(a%b!=0)
		{
			r = a % b;
			a = b;
			b = r;
		}
		return b;
	}
	else
		return -1;
}
int main()
{
	int a,b;
	int max_num,min_num;
	int gcd(int a,int b);
       
	printf("请输入两个正整数：");
	scanf("%d,%d",&a,&b);

	if(a>b)
		max_num =  gcd(a,b);
	else
		max_num = gcd(b,a);

	min_num = a*b/max_num;

	printf("最小公倍数为%d\n最大公约数%d\n",min_num,max_num);
return 0;
}
