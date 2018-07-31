 bool InsertDLinkList(DLinkList *&L,int n,int x)
 {
 	int i=0;
 	DLinkList *p=L,q;
 	while(i<n-1 && p!=NULL)
 	{
 		i++;
 		p=p->next;
 	}
 	if(p==NULL)
 	{
 	 return false;
 	}
 	else
 	{
 		q=(DLinkList *)malloc(sizeof(DLinkList));
 		q->data=x;
 		q->next=p->next;
 		if(p->next!=NULL)
 		{
 			p->next-prior=q;
 		}
 		p->next=q;
 		q->prior=p;
 		return true;
 	}
 }
