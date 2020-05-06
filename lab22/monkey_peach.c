#include<stdio.h>
#include<stdlib.h>

int main()
{
	int day,x1,x2;
	day = 9;
	x2 = 1;
	x1 = 0;
	while(day>0)
	{
		x1 = (x2+1)*2;
		x2 = x1;
		day--;
	}
	printf("摘的桃子总数为：%d\n",x2);
return 0;
}
