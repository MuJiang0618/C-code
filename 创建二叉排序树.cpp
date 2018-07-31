typedef int KeyType;
BSTNode* CreateBST(KeyType data[Maxsize],int n)
{
    BSTNode *t=NULL;    //①不要把t弄到形参 ②t为什么没有&？因为InsertBSTNode算法里的t有&
    int i=0;
    while(i<n)
    {
        InsertBSTNode(t,data[i]);
        i++;
    }
    return t;
}