/*
 * 求1+2!+3!+...+20!的和。
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	long double sum=0;
	long double m=1;

	for(i=1;i<=20;i++)
	{
		m = m*i;		
		sum = sum + m;
	}

	printf("sum=%Lf\n",sum);

return 0;
}
