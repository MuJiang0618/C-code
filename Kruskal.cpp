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
	while(k<G.n)   ������for(k=1;k<G.n;k++),��Ϊ����һ��Ҫ���G.e���ߣ�������ֻҪѭ��G.e�Σ���Ϊÿһ�β�һ���������һ���ߣ��γɻ�·�ı�Ҫ��ȥ
	{
		sn1=E[j].u;
		sn2=E[j].v;
		if(vset[sn1]!=vset[sn2])
		{
			printf("����%d  ������ %d   ȨֵΪ%d",sn1,sn2,E[j].cost);
			k++;                      ��С�������ı������ս��һ����n-1�����ǽ�����Ҫѭ��n-1�Σ�����Ҫ�ҵ�n-1�������Ե��ҵ�һ����ʱ��k++;
		
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
