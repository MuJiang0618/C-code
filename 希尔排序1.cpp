struct RecType
{
    int key;
};

void ShellSort(RecType data[],int n)
{
    int d=n/2;
    while(d>0)
    {
        for(int i=d;i<n;i++)
        {   
            RecType temp,int j;        
            if(data[i].key<data[i-d].key)
            {
                temp=data[i];
                j=i;
                do
                {
                    data[j+d]=data[j];
                    j=j-d;
                }while(temp.key<data[j].key && j>=0)

                data[j+d]=temp;
            }
        }

        d=d/2
    }
}

main()
{
    RecType data[10]={3,5,2,5,7,4,1,6,9,8};
    ShellSort(data,10);
    for(int i=0;i<10;i++);
    {
        printf("%d ",data[i].key);
    }
}