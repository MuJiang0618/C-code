void DFS1(ALGraph *G,int v,int &n,int &e)
{
	ArecNode *p;
	int w;
	visited[v]=1;
	n++;
	p=G->adjlist[v].firstarc;
	while(p!=NULL)
	{
		w=p->adjvex;
		if(visited[w]==0)
		{
		e++;
		DFS1(G,w,n,e);
	    }
		p=p->nextarc;
	}
}

bool GisTree(ALGraph *G)
{
	int n=0,e=0;
	for(int i=0;i<G->n;i++)
	{
		visited[i]=0;
	}
	DFS1(G,v,n,e);
	if(n==e+1)
	return true;
	else
	return false;
}



