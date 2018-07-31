#include <stdio.h>

bool DeleMax(LinkList *&L)
{
	LinkList *pre=L,*p=L->next,*maxpre=L,*maxp=L->next;
	while(p!=NULL)
	{
		if(maxp->data<p->data)
		{
			maxpre=pre;
			maxp=p;
		}
        pre=p;
	    p=p->next;
        
	}
	maxpre->next=maxp->next;
	free(maxp);
}
