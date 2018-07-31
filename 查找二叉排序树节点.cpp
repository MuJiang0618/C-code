BSTNode* SearchBSTNode(BSTNode *t,KeyType k)
{
    if(t==NULL || t->key==k)
        return t;
    else if(k<t->key)
        return SearchBSTNode(t->lchild,k);
    else
        return SearchBSTNode(t->rchild,k);
}