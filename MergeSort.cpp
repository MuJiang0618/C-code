void MergeSort(RecType data[],int n)
{
	int length;
	for(length=2;length<n;length=length*2)
	{
		MergePass(data,length,n);
	}
}
