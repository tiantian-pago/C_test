#include<stdio.h>
#define N 100

int main()
{
	int Sum,i,j,k,n;
	int a[256];

	for(i=2;i<=1000;i++)
	{
		Sum = a[0] = 1;
		k = 0;
		for(j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				Sum +=j;
				a[++k] = j;
			}
		}

		if(i==Sum)
		{
			printf("%d=%d",Sum,a[0]);
			for(n=1;n<=k;n++)
				printf("+%d",a[n]);
			printf("\n");
		}
	}
return 0;
}
