/*
 * 有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。
 */

#include<stdio.h>

int main()
{
	int a[11] = {1,4,6,9,13,16,19,28,40,100};
	int i,j,temp1,temp2,number;

	printf("原数组是：\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n在数组中插入一个数：");
	scanf("%d",&number);
	
	if(number>a[9])
		a[10] = number;
	else
	{
		for(i=0;i<10;i++)
		{
			if(a[i]>number)
			{
				temp1 = a[i];
				a[i] = number;
				for(j=i+1;j<11;j++)
				{	temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
					
				}
				break;
			}
		}

	}
	printf("\n插入后的数组是：\n");
	for(i=0;i<11;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
