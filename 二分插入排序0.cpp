#include <stdio.h>

struct RecType
{
    int key;
};

void BinInsertSort(RecType data[],int n)
{
    RecType temp;
	int j;
    for(int i=1;i<n;i++)
    {
        if(data[i].key<data[i-1].key)
        {
            int left=0,right=i-1,mid;
            temp=data[i];
            while(left<=right)
            {
                mid=(left+right)/2;
                if(data[mid].key<temp.key)
                    left=mid+1;
                else
                    right=mid-1;
            }

            for(j=i-1;j>right;j--)
                data[j+1]=data[j];

            data[right+1]=temp;            
        }
    }
}

int main()
{
    RecType data[10]={{3},{5},{2},{5},{7},{4},{1},{6},{9},{8}};
    BinInsertSort(data,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",data[i].key);
    }
    
    return 0;
}
