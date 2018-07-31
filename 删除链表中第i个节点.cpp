#include <stdio.h>
#include <malloc.h>

bool DeleList(LinkList *&L,int i)
{
	LinkList *q=L,*p;
	int n=0;
	while (n<i-1 && q!=NULL)
	{
		n++;
		q=q->next;
	}
	if(q==NULL)
	{
	return false;	
	}
	else
	{
		p=q->next;
		if(p==NULL)
		{
			return false;
		}
		q->next=p>next;
		free(p);
		return true;
	}
}
