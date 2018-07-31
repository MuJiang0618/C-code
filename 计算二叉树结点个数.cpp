//计算二叉树节点个数
int Counter(BTNode *t) 
{
	if(t->lchild==NULL && t->rchild==NULL)
		return 1;
		
	else if(t==NULL)
		return 0;
		
	else
	{
		lchild=Counter(t->lchild);
		rchild=Counter(t->rchild);
		return lchild+rchild;
	}
}
