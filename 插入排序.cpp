void InsertSort(RecType Data[Maxsize],int n)
{
    for(int i=1;i<n;i++)
    {
        if(Data[i].key<Data[i-1].key)
        {
            RecType temp=Data[i];    //因为前面的元素要往后拉——第十行语句,所以要用变量保存当前的元素
            int j=i-1;
            do
            {
                Data[j+1]=Data[j];
                j--;
            }while(j>=0 && Data[j].key>temp.key)
            Data[j+1]=temp;
        }
    }
}