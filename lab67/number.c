/*
 * 编写一个函数，输入n为偶数时，调用函数求1/2+1/4+...+1/n,当输入n为奇数时，调用函数1/1+1/3+...+1/n(利用指针函数)。
 */

#include<stdio.h>
#include<stdlib.h>

double evenumber(int n);
double oddnumber(int n);

int main()
{
	int n;
	double (*pfunc)(int);
	double r;

	printf("请输入一个整数：");
	scanf("%d",&n);
	if(n%2==0)
		pfunc=evenumber;
	else
		pfunc=oddnumber;
	r=(*pfunc)(n);
	printf("调用函数后的值为：%lf\n",r);
	return 0;
}

double evenumber(int n)
{
	int i;
	double sum=0;
	for(i=2;i<=n;i+=2)
	{
		sum += (double) 1/i;
	}
	return sum;
}

double oddnumber(int n)
{
	int i;
	double sum=0;
	for(i=1;i<=n;i+=2)
		sum += (double) 1/i;
	return sum;
}
