//求值为x的节点的层次
int LevelNode(BTNode *t,int x,int s) 
{
	if(t->data==x)
		return s;
		
	else if(t==NULL)
		return=0;
		
	else
	{
		h=LevelNode(t->lchild,x,s+1);
		if(h!=0)
			return h;
		else
			return LevelNode(t->rchild,x,s+1);
	}
}
