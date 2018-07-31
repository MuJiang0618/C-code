void Sift(RecType data[],int low,int high)
{
	RecType temp=data[low];
	int i=low;
	int j=2*i;
	while(j<=high)
	{
		while(j<high && data[j].key<data[j+1].key) 
		j++;
		
		if(temp.key<data[j].key)
		{
			data[i]=data[j];
			i=j;
			j=2*i;
		}
		
		else break;		
	}
	data[i]=temp;
}
