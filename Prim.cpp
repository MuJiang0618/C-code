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
		printf("����%d������%d��̣�Ȩֵ��%d\n",closest[k],k,Min);
		lowcost[k]=0;    //���Ѿ��ҵ�����С�߶�Ӧ��U-V�����еĶ���鵽U������ 
		
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
