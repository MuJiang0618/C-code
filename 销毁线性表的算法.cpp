#include <stdio.h>
#include <malloc.h>

void DestroyList(LinkList *&L)
{
	LinkList *pre=L,*p=pre->next;
	while(p !=NULL)
	{
	  free(pre);
	  pre=p;
	  p=pre->next;
	}	
	free(pre);
}
