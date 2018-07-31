void thread(TBTNode *p)
{
	if(p!=NULL)
  {	
	thread(p->lchild);
	if(p->lchild==NULL) 
	{
		p->lchild=pre;
		p->ltag=1;
	}
	else p->ltag=0;
	if(pre->rchild==NULL)
	{
		pre->rchild=p;
		pre->rtag=1;
	}
	else pre->rtag=0;
	pre=p;
	thread(p->lchild);
  }
}
