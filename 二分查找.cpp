int BinarySearch(SqList R,int n,KeyType k)
{
    int left=0,right=n-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(R[mid].key==k)
            return mid+1;  //返回逻辑序号
        else if(R[mid].key<k)
            right=mid-1;
        else
            left=mid+1;
    }
    return 0;      //如果没找到
}