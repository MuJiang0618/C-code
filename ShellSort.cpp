void ShellSort(RecType data[],int n)
{
	int d=n/2;
	int i,j;
	RecType temp;
	while(d>0)
	{
		for(i=d;i<n;i++)
		{
			temp=data[i];
			j=i-d;
			while(j>=0 && temp.key<data[j].key)
			{
				data[j+d]=data[j];
				j=j-d;
			}
			data[j+d]=temp;
		}
		d=d/2;
	}
}
