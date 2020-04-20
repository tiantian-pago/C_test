#include<stdio.h>

int main()
{
	int n,reverseNumber,remind;
	
	printf("请输入一个整数：");
	scanf("%d",&n);
	while(n!=0)
	{
		remind = n%10;
		reverseNumber = reverseNumber*10+remind;
		n=n/10;
	}
	printf("\n反转后的整数为：%d\n",reverseNumber);
}
