void Floyd(MGraph G)
{
	int dist[Maxsize][Maxsize],path[Maxsize][Maxsize];
	for(int i=0;i<G.n;i++)
	{
		for(int j=0;j<G.n;j++)
		{
			dist[i][j]=G.Edges[i][j];
			if(i!=j && dist[i][j]<Infi)
			path[i][j]=i;
			else
			path[i][j]=-1;
		}
	}
	for(int k=0;k<G.n;k++)
	{
		for(i=0;i<G.n;i++)
		{
			for(j=0;j<G.n;j++)
			{
				if(dist[i][j] > dist[i][k]+dist[k][j])
				{
					dist[i][j]=dist[i][k]+dist[k][j];
					path[i][j]=path[k][j];
				}
			}
		}
	}
}
