#define Infi 32165461
void 狄克斯特拉算法(MGraph *G,int v) 
{
	int dist[Maxsize],path[Maxsize];
	int s[Maxsize],j,k,Min=Infi;
	for(int i=0;i<G->n;i++)
	{
		s[i]=0;
		dist[i]=G->Edges[v][i];
		if(dist[i]<Infi)
		path[i]=v;
		else
		 path[i]=-1;
	}
	
	s[v]=1;
	
	for(i=1;i<G->n;i++)
	{
		for(k=0;k<G->n;k++)
		{
			if(s[k]==0 && dist[k]<Min)
			{
				Min=dist[k];
				j=k;				
			}
		}
		s[j]=1;
		for(k=0;k<G->n;k++)
		{
			if(s[k]==0)
			{			
			  if(G->Edges[j][k]<Infi && (dist[j]+G->Edges[j][k])<dist[k])
			 {
				dist[k]=dist[j]+G->Edges[j][k];
				path[k]=j;
			 }
            }
		}
	}
}
