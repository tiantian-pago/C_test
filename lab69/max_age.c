/*
 * 找到年龄最大的人，并输出。请找出程序中有什么问题。
 */

#include<stdio.h>

struct man{
	char name[20];
	int age;
}
person[3]={"li",18,"wang",25,"sun",22};

int main()
{
	struct man *p,*q;
	int k,m;
	p=person;
	q=person;	//当age=0 q没有赋值
	m=0;
	for(k=0;k<3;k++)
	{
		if(m<p->age)
		{
			m=p->age;
			q=p;
		}
		p++;
	}
	printf("%s,%d\n",q->name,q->age);
	return 0;
}
