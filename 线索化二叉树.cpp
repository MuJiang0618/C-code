BTNode *pre;
void Thread(BTNode *t)
{
	if(t!=NULL)
	{
		Thread(t->lchild);
		if(t->lchild==NULL)
		{
			t->lchild=pre;
			t->ltag=1;
		}
		else
			t->ltag=0;
		
		if(pre->rchild==NULL)
		{
			pre->rchild=t;
			pre->rtag=1;
		}
	
		else
			pre->rtag=0;
		
		pre=t;
		Thread(t->rchild);
	}
}

void CreateTBT(BTNode *root)
{
	BTNode *head=(BTNode*)malloc(sizeof(BTNode));
	head->rchild=root;
	pre=head;
	Thread(root);
	pre->rchild=head;
	pre->rtag=1;
	return head;
}
