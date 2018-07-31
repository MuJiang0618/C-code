typedef struct
{
	int u;
	int v;
	int cost;
}Edge

void Kruskal(MGraph G)
{
	int k=0
	Edge E[Maxsize];
	int vset[Maxsize];
	int sn1,sn2;
	for(int i=0;i<G.n;i++)
	{
		for(int j=0;j<G.n;j++)
		{
			if(G.Edges[i][j]!=0 && G.Edges[i][j]<Infi)
			{
			   E[k].u=i;
			   E[k].v=j;
			   E[k].cost=G.Edges[i][j];
			   k++;			
			}
		}
	}
	
	InsertSort(G,G.e);
	for(i=0;i<G.n;i++)
	{
		vset[i]=0;
	}
	
	k=1;
	j=0;
	while(k<G.n)   不能用for(k=1;k<G.n;k++),因为最终一定要求出G.e条边，而不是只要循环G.e次，因为每一次不一定都会加入一条边，形成回路的边要舍去
	{
		sn1=E[j].u;
		sn2=E[j].v;
		if(vset[sn1]!=vset[sn2])
		{
			printf("顶点%d  到顶点 %d   权值为%d",sn1,sn2,E[j].cost);
			k++;                      最小生成树的边数最终结果一定是n-1，不是仅仅需要循环n-1次，而是要找到n-1条，所以当找到一条边时才k++;
		
		 for(i=0;i<G.n;i++)
		 {
			if(vset[i]==sn2)
			{
				vset[i]=sn1;
			}
		 }
	    }
		j++;
	}
}
