typedef struct
{
	int data;
	int count;
	ArcNode *firstarc;
}VNode;

void Õÿ∆À≈≈–Ú(VNode adj[Maxsize],int n)
{
   int St[Maxsize];
   int top=-1;
   ArcNode *p;
   int k;
   for(int i=0;i<n;i++)	
   {
   	   if(adj[i].count==0)
   	   {
   	   	  top++;
   	   	  St[top]=i;
   	   }
   }
   
   while(top!=-1)
   {
   	k=St[top];
   	top--;
   	printf("%d ",k);
   	p=adj[k].firstarc;
   	while(p!=NULL)
   	{
   		adj[p->adjvex].count--;
   	   if(adj[p->adjvex].count ==0)	
   	   {
   	   	top++;
   	   	St[top]=p->adjvex;
   	   }
   	   p=p->nextarc;
   	}
   }
} 
