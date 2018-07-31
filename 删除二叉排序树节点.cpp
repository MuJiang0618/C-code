//删除二叉排序树节点
int DeleteBSTNode(BSTNode *&t,KeyType k)
{
    if(t!=NULL)   //如果没找到就直接返回0
    {     //首先找到待删除节点，然后分三种情况删除它
        if(t->key==k)
            Delete0(t);   //删除该节点
            return 1;

        else if(t->key<k)
            return DeleteBSTNode(t->rchild,k);

        else 
            return DeleteBSTNode(t->lchild,k);
    }

    return 0;
}

void Delete0(BSTNode *s)  //&?
{
    //待删除节点是叶子节点还是有两个孩子还是只有一个孩子？
    BSTNode *p;
    if(s->lchild==NULL)   //没有左孩子，如果也没有右孩子就可以直接删了
    {
        p=s;
        s=s->rchild;
        free(p);
    }

    if(s->rchild==NULL)   //没有右孩子,如果也没有左孩子就可以直接删了
    {
        p=s;
        s=s->lchild;
        free(p);
    }

    if(s->lchild!=NULL && s->rchild!=NULL)    //左右孩子都不为空
        Delete1();
}

void Delete1(BSTNode *r,BSTNode *&p0)  //&?    p0保存r的左孩子
{
    //找到该节点左半部分最大的节点
    if(p0->rchild!=NULL)
        Delete1(r,p0->rchild);

    else  //遍历到的当前节点没有右孩子了，是最左边的节点了
    {
        r->key=p0->key;  //完成替换
        BSTNode *p1=p0;
        p0=p0->lchild;
        free(p1);
    }
}