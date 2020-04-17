/*
 *有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位。
 */

#include<stdio.h>

int main()
{
	int num[50],n,*p,m,i,k,loop,j;
	printf("请输入这一圈人的数量:\n");
	scanf("%d",&n);
	p=num;
	//给人编号
	for(j=0;j<n;j++)
		*(p+j)=j+1;
	i=0; //i用于计数，即让指针后移
	m=0; //m记录退出圈子的人数
	k=0; //k报数1，2，3
	while(m<n-1) // 当退出圈子的人数不大于总人数时，既是留下的最后人数
	{
		if(*(p+i)!=0)
		{
			k++;
		}
		if(k==3)
		{
			k=0;
			*(p+i)=0;
			m++;
		}
		i++;
		if(i==n)
		{
			i=0;
		}
	}
	printf("现在剩下的人是:");
	for(loop=0;loop<n;loop++)
	{
		if(num[loop]!=0)
		{
			printf("%d号\n",num[loop]);
		}
	}
	return 0;

}
