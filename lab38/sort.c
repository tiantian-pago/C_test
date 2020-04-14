/*
 * 对10个数进行排序。
 */

#include<stdio.h>

int main()
{
	int a[10],i,j,temp;
	
	printf("请输入10个整数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{
		for(j=i;j<9;j++)
		{
			if(a[9-j]<a[9-j-1])
			{
				temp = a[9-j];
				a[9-j] = a[9-j-1];
				a[9-j-1] = temp;
			}
		}
	}
	for(i=0;i<10;i++)
		printf("%d",a[i]);
	printf("\n");
	return 0;
}
