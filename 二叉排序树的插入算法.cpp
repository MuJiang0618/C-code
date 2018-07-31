int InsertBST(BSTNode *&t,KeyType k)
{
	if(t==NULL)
	{
		t=(BSTNode *)malloc(sizeof(BSTNode));
		t->key=k;
		t->lchild=t->rchild=NULL;
		return 1;
	}
	
	else if(t->key==k)
		return 0;
		
	else if(k>t->key)
	{
		InsertBST(t->lchild,k);
	}
	
	else (k<t->key)
	{
		InsertBST(t->rchild,k);
	}
}
