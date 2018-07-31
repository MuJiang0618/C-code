void Sift(RecType data[],int low,int high)
{
	RecType temp=data[low];
	int i=low,j=2*i;
	while(j<=high)
	{
		if(j<high && data[j].key<data[j+1].key)    //MOOC上是while?是从孩子节点挑最大的，应该是if 
		j++;
		
		if(data[j].key > temp.key)
		{
			data[i]=data[j];
			i=j;
			j=2*i;
		}
		else break;
	}
	data[i]=temp;
}

void HeapSort(RecType data,int n)
{
	
	RecType temp;
	for(int i=n/2;i>=1;i--)
	{
		Sift(data,i,n);
	}
	
	for(i=n;i>1;i--)
	{
		printf("%d",data[1].key);
		temp=data[1];
		data[1]=data[i];
		data[i]=temp;
		Sift(data,1,i-1);
	}
}
