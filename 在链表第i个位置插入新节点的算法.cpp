#include <stdio.h>
#include <malloc.h>

bool InsertList(LinkList *&L,int i,int e)
{
	LinkList *p=L;
	int n=0;
	while (n<i-1 && p!=NULL)
	{
		n++;
		p=p->next;
	}
	if(p==NULL)
	{
		return false;
	}
	else
	{
		LinkList *s=(LinkList *)malloc(sizeof(LinkList));
		s->next=p->next;
		p->next =s;
		return true;
	}
}
