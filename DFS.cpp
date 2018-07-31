int visited[n];
void DFS(ALGraph *G,int v)
{
	ArcNode *p;int w;
	visited[v]=1;
	printf("%d ",v);
	p=G->adjlist[v].firstarc;
	while(p!=NULL)
	{
		w=p->adjvex;
		if(visited[w]==0)
		  DFS(G,w);
		p=p->nextarc;
	}
}
