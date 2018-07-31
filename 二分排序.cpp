void BiSearch(RecType data[],int n)
{
	RecType temp;
	int left,right,mid;
	for(int i=1;i<n;i++)
	{
		if(data[i].key<data[i-1].key)
		{
			temp=data[i];
			left=0;
			right=i-1;
			while(left<=right)
			{
				mid=(left+right)/2;
				if(temp.key<data[mid].key)
                    right=mid-1;
				else
				    left=mid+1;		  
			}
			
			for(int j=i-1;j>=high+1;j--)   //插入点之前的元素后移 
			    data[j+1]=data[j];
			    
			data[high+1]=temp;    //插入 
		}
	}
}
