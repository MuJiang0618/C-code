void 一次二路归并(RecType data[],int low,int mid,int high)
{
	RecType *R;
	R=(RecType*)malloc((high-low+1)*sizeof(RecType));
	int i=low,j=mid+1,k=0;
	while(i<=mid && j<=high)
	{
		if(data[i].key <= data[j].key)
		{
			R[k]=data[i];
			i++;
			k++;
		}
		
		else
		{
			R[k]=data[j];
			k++;
			j++;
		}
	}
	
	while(i<=mid)
	{
		R[k]=data[i];
		k++;
		i++;
	}
	
	while(j<=high)
	{
		R[k]=data[j];
		k++;
		j++;
	}
	
	for(k=0,i=low;i<=high;i++,k++)
	{
		data[i]=R[k];
	}
	
	free(R);
}
