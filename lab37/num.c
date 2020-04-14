/*
 * 求100之内的素数
 */

#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,k;

	for(i=1;i<=100;i++)
	{
		k = (int) sqrt(i);
		for(j=2;j<=k;j++)
		{
			if(i%j==0)
				break;
		}
		if(j>k)
		{
			printf("%3d",i);
		}
	}
	printf("\n");
	return 0;
}
