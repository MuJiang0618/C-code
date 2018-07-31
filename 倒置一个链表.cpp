#include <stdio.h>

bool fun(LinkList *&L)
{
	LinkList *q=L->next,*p;
	while(q!=NULL)
	{
	p=q->next;
	q->next=L->next;
	L->next=q;
	q=p;
	}
}
