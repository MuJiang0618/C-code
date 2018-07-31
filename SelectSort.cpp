void SelectSort(RecType data[],int n)
{
	RecType temp;
	for(int i=0;i<n-1;i++)
	{
		int k=i;
		for(int j=i+1;j<n;j++)
		{
			if(data[j].key <data[k].key)
			k=j;
		}
		
		if(k!=i)
		{
			temp=data[j];
			data[j]=data[k];
			data[k]=temp;
		}
	}
}
