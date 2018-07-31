void Prim(MGraph *G,int v)
{
	int closest[Maxsize],lowcost[Maxsize];
	int k,j,Min=36542;
	
	for(int i=0;i<G->n;i++)
	{
		closest[i]=v;
		lowcost[i]=G->Edges[v][i];
	}
	
	for(i=1;i<G->n;i++)
	{
		for(j=0;j<G->n;j++)
		{
			if(lowcost[j]!=0 && lowcost[j]<Min)
			{
				Min=lowcost[j];
				k=j;
			}			
		}
		printf("顶点%d到顶点%d最短，权值是%d\n",closest[k],k,Min);
		lowcost[k]=0;    //把已经找到的最小边对应的U-V集合中的顶点归到U集合中 
		
		for(j=0;i<G->n;i++)
		{
		   if(lowcost[j]!=0 && G->Edges[k][j]<lowcost[j])	
		   {
		   	lowcost[j]=G->Edges[k][j];
		   	closest[j]=k;
		   }
		}
	}
}
