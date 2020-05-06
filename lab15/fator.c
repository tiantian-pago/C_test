#include<stdio.h>

int main()
{
	int i,n;
	printf("请输入正整数：");
	scanf("%d",&n);
	printf("%d=",n);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d",i);
			n /= i;
			if(n!=1) printf("*");
		}
	}
	printf("\n");
return 0;
}
