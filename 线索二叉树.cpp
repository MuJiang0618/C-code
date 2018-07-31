TBTNode *pre;     pre为全局变量 
TBTNode* CreateThread(TBTNode *b)
{
	TBTNode *root=(TBTNode*)malloc(sizeof(TBTNode));
	root->ltag=0;root->rtag=1;root->rchild=b;    意义何在？ 
	if(b==NULL) root->lchild=root;
	else
	{
		root->lchild=b;
		pre=root;
		thread(b);
		pre->rchild=root;pre->rtag=1;
		root->rchild=pre;		
	}
	return root;
}

void thread(TBTNode *p)
{
	if(p!=NULL)
  {	
	thread(p->lchild);
	if(p->lchild==NULL)
	{
		p->ltag=1;
		p->lchild=pre;
	}
	else p->ltag=0;
	if(pre->rchild==NULL)
	{
		pre->rtag=1;
		pre->rchild=p;
	}
	else pre->rtag=0;
	pre=p;
	thread(p->rchild);
  }
}
