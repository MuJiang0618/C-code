int visited[G->n]
void FindAllPath(ALGraph *G,int u,int v,int path[])
{
	ArcNode *p;int w;
	d++;	//d�ĳ�ʼֵΪ-1 
	path[d]=u;
	visited[u]=1;
	if(u==v && d>=1)
	{
		printf("����һ��·��Ϊ\n");
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
	//ÿһ�λ������ϼ�����ʱ��path�����·��Ҳ�ͻص�����һ�����㣬�������õĺ��������·���Զ���ʧ�� 
}
