void InsertSort(RecType data[],int n)
{
	int j;
	RecType temp;
	for(int i=1;i<n;i++)
	{
		if(data[i].key<data[i-1].key)
		{
			temp=data[i];
			j=i-1;
			do
			{
				data[j+1]=data[j];
    				j--;
			} while(j>=0 && data[j].key>temp.key])
			data[j+1]=temp;
		}
	}
}
