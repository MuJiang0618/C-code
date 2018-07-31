void DLinkList(DLinkList *&L,int a[],int n)
{
	L=(DLinkList *)malloc(sizeof(DLinkList));
	L->prior=NULL
	L->next=NULL;
	DLinkList *p;
	for(int i=0;i<n;i++)
	{
		p=(DLinkList *)malloc(sizeof(DLinkList));
		p->data=a[i];
		p->next=L->next;
		while(L-next!=NULL)
		{
			p->next->prior=p;
		}
		L->next=p;
		p->prior=L;
	}
}
