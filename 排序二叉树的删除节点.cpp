void Delete1(BSTNode *q,BSTNode *&s)
{
	BSTNode *p;
	if(s->rchild!=NULL)
	{
		Delete1(q,s->rchild);
	}
	
	else
	{
		q->key=s->key;
		q->data=s->data;
		p=s;s=s->lchild;
		free(p);	
	}
}

void Delete(BSTNode *&t)
{
	BSTNode *p;
	if(t->lchild==NULL)
	{
		p=t;
		t=t->rchild;
		free(p);
	}
	
	 else if(t->rchild==NULL)
	{
		p=t;
		t=t->lchild;
		free(p);
	}
	
	else
	Delete1(t,t->lchild);
}

int DeleteBST(BSTNode *&root,KeyType k)
{
	if(root==NULL)
	return 0;
	
	else
	{
		if(k<root->key)
		{
			return DeleteBST(root->lchild,k);
		}
		
		else if(k>root->key)
		{
			return DeleteBST(root->rchild,k);
		}
		
		else
		{
			Delete(root);
			return 1;
		}
	}
}

