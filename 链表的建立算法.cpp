#include <stdio.h>
#include <malloc.h>

void CreateLinkList(LinkList *&L,int a[],int n)
{
	LinkList *q,*L;
	L=(LinkList *)malloc(sizeof(LinkList));
    q=L;
	for(int i=0;i<n;i++)
	{
	  LinkList *Q=(LinkList *)malloc(sizeof(LinkList));
	  Q->data=a[i];
	  q->next=Q;
	  q=Q;
	}
	q->next=NULL;
}
