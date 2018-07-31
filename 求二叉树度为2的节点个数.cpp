int Number(BTNode *b)
{
	if(b->lchild!=NULL && b->rchild!=NULL)
		return 1+Number(b->lchild)+Number(b->rchild);
		
	else if(b==NULL)	
		return 0;
	else
	{
		int lchild=Number(b->lchild);
		int rchild=Number(b->rchild);
		return lchild+rchild;
	}
}	

