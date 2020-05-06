/*
 * 反向输出一个链表.
 */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct LNode{
	int data;
	struct LNode *next;
}LNode,*LinkList;

LinkList CreateList(int n);
LinkList RevLinkList(LinkList h);
void print(LinkList h);

int main()
{
	LinkList Head=NULL,RevHead=NULL;
	int n;
	printf("输入链表元素个数：");
	scanf("%d",&n);
	Head=CreateList(n);

	printf("刚刚建立的各个链表元素的值为：\n");
	print(Head);
	
	printf("\n链表反向输出：\n");
	RevHead = RevLinkList(Head);
	print(RevHead);

	printf("\n\n");
	system("pasue");
	return 0;
}

LinkList CreateList(int n)
{
	LinkList L,p,q;
	int i=1;
	L=(LNode*)malloc(sizeof(LNode));
	if(!L) return 0;
	printf("请输入第%d个元素：",i);
	scanf("%d",&(L->data));
	L->next=NULL;
	q=L;
	for(i=2;i<=n;i++)
	{	p=(LNode*)malloc(sizeof(LNode));
		printf("请输入第%d个元素：",i);
		scanf("%d",&(p->data));
		p->next=NULL;
		q->next=p;
		q=p;
	}
	return L;
}

LinkList RevLinkList(LinkList L)
{
	LinkList currentNode,preNode,nextNode;
	currentNode = L;
	if(currentNode==NULL)
		return NULL;
	nextNode = NULL;
	preNode = NULL;
	while(currentNode!=NULL)
	{
		nextNode = currentNode->next;
		currentNode->next = preNode;
		preNode = currentNode;
		currentNode = nextNode;
	}
	printf("\n");
	return preNode;
}
void print(LinkList h)
{
	while(h!=NULL)
	{
		printf("%d ",h->data);
		h=h->next;
	}
}
