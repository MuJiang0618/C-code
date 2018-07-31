int visited[G->n]
void FindAllPath(ALGraph *G,int u,int v,int path[])
{
	ArcNode *p;int w;
	d++;	//d的初始值为-1 
	path[d]=u;
	visited[u]=1;
	if(u==v && d>=1)
	{
		printf("其中一条路径为\n");
		for(int i=0;i<=d;i++)
		{
			printf("%d ",path[i]);
		}
		printf("\n");
	}
	
	p=G->adjlist[u].firstarc;
	while(p!=NULL)
	{
		w=p->adjvex;
		if(visited[w]==0)
		{			
			FindAllPath(G,w,v);
		}
		p=p->nextarc;
	}
	visited[u]=0;    
	//每一次回跳到上级函数时，path保存的路径也就回到了上一级顶点，后来调用的函数保存的路径自动消失了 
}
