int InsertBSTNode(BSTNode *&t,int k)    //为什么是&t?  因为最后插入了一个新节点时，要使其与父亲节点建立关系，其父亲节点的左（右）孩子指针指向它
{
    if(t==NULL)
    {
        t=(BSTNode*)malloc(sizeof(BSTNode));
        t->key==k;
        t->lchild=t->rchild==NULL;     //不要忘记左右孩子赋空
        return 1;
    }

    else if(k<t->key)
        return InsertBSTNode(t->lchild,k);     //不要少了return 
    else if(k==t->key)     //已存在相同节点，不用再插入
        return 0;
    else
        return InsertBSTNode(t->rchild,k);
}