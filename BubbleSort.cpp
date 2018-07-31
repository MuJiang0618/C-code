void BubbleSort(RecType data[],int n)
{
	bool exchange;
	RecType temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			exchange=false;
			if(data[j].key<data[j-1].key)
			{
				exchange=true;
				temp=data[i];
				data[i]=data[i-1];
				data[i-1]=temp;
			}
		}
		if(exchange==false)
		return;
	}
}
