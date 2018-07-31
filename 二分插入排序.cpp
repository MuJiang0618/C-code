void BiSearch(RecType data[],int n)
{
	RecType temp;
	int left,right,mid;
	for(int i=1;i<n;i++)
	{
		if(data[i].key<data[i-1].key)
		{
			temp=data[i];
			left=0;                     //left和right的赋初值要在循环内，因为每次i++后都要重新来一次二分查找 
			right=i-1;
			while(left<=right)
			{
				mid=(left+right)/2;
				if(temp.key<data[mid].key)
                    right=mid-1;
				else
				    left=mid+1;		  
			}
			
			for(int j=i-1;j>=high+1;j--)
			   data[j+1]=data[j];
			data[high+1]=temp;
		}
	}
}
