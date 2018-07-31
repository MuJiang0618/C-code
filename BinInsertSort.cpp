void BiInsertSort(RecType data[maxsize],int n)
{
    for(int i=1;i<n;i++)
    {
        if(data[i].key<data[i-1].key)
        {
            RecType temp=data[i];
            int low=0,high=i-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(temp.key<data[mid].key)
                    high=mid-1;
                else
                    low=mid+1;
            }
            for(int j=i-1;j>=high+1;j--)
                data[j+1]=data[j];
            data[high+1]=temp;
        }
    }
}