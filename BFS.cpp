void BFS(ALGraph *G,int v)
{
	int b; ArcNode *p;
	int visited[G->n];
	int Queue[G->n];int front=0,rear=0;
	for(int i=0;i<G->n;i++)
	{
		visited[i]=0;
	}
	printf("%d ",v);
	visited[v]=1;
	rear=(rear+1)%Maxsize;
	Queue[rear]=v;
	while(rear!=front)
	{
		front=(front+1)%Maxsize;
		b=Queue[front];
		p=G->adjlist[b].firstarc;
		while(p!=NULL)
		{
			if(visited[p->adjvex]==0)
			{
				printf("%d ",p->adjvex);
				visited[p->adjvex]=1;
				rear=(rear+1)%Maxsize;
				Queue[rear]=p->adjvex;
			}
			p=p->nextarc;
		}
	}
	
}
