#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

LinkList create_list(int n)
{
	LinkList L,p,q;
	int i=1,j;
	L=(LNode*)malloc(sizeof(LNode));
	if(!L) return NULL;
	printf("请输入第 %d 个元素：",i);
	scanf("%d",&j);
	L->data = j;
	L->next = NULL;
	q = L;
	for(i=2;i<=n;i++)
	{
		p = (LNode*)malloc(sizeof(LNode));
		printf("请输入第 %d 个元素：",i);
		scanf("%d",&j);
		p->data = j;
		p->next = NULL;
		q->next = p;
		q=p;
	}
	return L;
}

LinkList con_list(LinkList perhead1,LinkList perhead2)
{
	LinkList perNode = perhead1;
	if(!perNode) return perhead2;
	while(perNode->next)
		perNode=perNode->next;
	perNode->next=perhead2;
	return perhead1;
}

void print_list(LinkList head)
{
	if(head==NULL)
		printf("链表为空\n");
	else
	{
		while(head!=NULL)
		{
			printf("%d->",head->data);
			head = head->next;
			if(head->next==NULL)
				break;
		}
		printf("%d",head->data);
	}
}

int main()
{
	LinkList per1,per2,per3;
	int i,n;
	printf("创建第一个链表\n");
	printf("请输入第一个链表的元素个数：");
	scanf("%d",&n);
	per1 = create_list(n);
	printf("创建第二个链表\n");
	printf("请输入第二个链表的元素个数：");
	scanf("%d",&n);
	per2 = create_list(n);
	printf("连接后的链表为：\n");
	per3 = con_list(per1,per2);
	print_list(per3);
	printf("\n");
	return 0;
}
