void Thread(TBTNode *&p)
{
	if(p!=NULL)
	{
	Thread(p->lchild);
	if(p->lchild==NULL)
	{
		p->lchild=pre;
		p->ltag1;
	}  else p->ltag=0;
	
	if(pre->rchild==NULL)
	{
		pre->rchild=p;
		pre->rtag=1;
	} else pre->rtag=0;
	pre=p;   //从左子树到根节点，从根节点到右子树，保持pre是当前节点的前驱结点 
	Thread(p->rchild);
    }
}

TBTNode *pre;
TBTNode* CreatInThBT(TBTNode *b)
{
	TBTNode *root;
	root=(TBTNode*)malloc(sizeof(TBTNode));
	root->ltag=0;root->rtag=0;root->rchild=b;
	if(b==NULL) root->lchild=root; 
	else
	{
		root->lchild=b;
		pre=root;
		Thread(b);
		pre->rchild=root;
		pre->rtag=1;
		root->rchild=pre;
	}
	return root;
}

void  InThBT(TBTNode *t)
{
	 TBTNode *p=t->lchild;
	 while(p!=t)
	 {
	 	while(p->ltag==0) p=p->lchild;
	 	printf("%c",p->data);
	 	while(p->rtag==1 && p->rchild!=t)
	 	{
	 		p=p->rchild;
	 		printf("%c",p->data);
	 	}
	 	p=p->rchild;
	 }
}

void Middle(TBTNode *Header)
{
	TBTNode *p=Header->lchild;
	while(p!=Header)
	{
		while(p->ltag=0)	p=p->lchild;
		printf("%c ",p->data);
		while(p->rchild!=Header && p->rtag==1)
		{
			p=p->lchild;
			printf("%c ",p->data);			
		}
		
		p=p->rchild;
	}
}




























