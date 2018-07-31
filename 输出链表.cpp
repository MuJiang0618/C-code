#include <stdio.h>

void DispList(LinkList *& L)
{
	LinkList *q=L->next;
	while(q !=NULL)
	{
		printf("%d ",q->data);
		q=q->next;
	}	
}
