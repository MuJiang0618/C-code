void QuickSort(RecType data[],int b,int e)
{
	int i=b+1,j=e;
	RecType temp;
	if(s<t)
	{
		temp=data[b];
		while(i!=j)
		{
		 while(i<j && data[i].key<=temp.key)
		   i++;
		 data[j]=data[i];
		 while(i<j && data[j].key>+temp.key)
		   j--;
		 data[i]=data[j];
	    }
	    data[i]=temp;
	}
	
	QuickSort(data,b,i-1);
	QuickSort(data,i+1,e);
}
