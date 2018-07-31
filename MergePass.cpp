void MergePass(RecType data[],int length,int n)
{
	for(int i=0;i+2*length-1<n;i=i+2*length-1)
	{
		Merge(data,i,i+length-1,i+2*length-1);
	}
	
	if(i+length-1<n)
	{
		Merge(data,i,i+length-1,n-1);
	}
}
