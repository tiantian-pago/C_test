/*
 * 练习函数调用。
 */

#include<stdio.h>

void hello_world(void)
{
	printf("Hello World!\n");
}

void three_worlds(void)
{
	int count;
	for(count=1;count<=3;count++)
		hello_world();          //调用3次此函数。
}

int main()
{
	three_worlds();      //调用此函数。
}
