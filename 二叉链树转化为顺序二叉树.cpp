void trans2(BTNode* p,SqBiTree q,int i) 
{
	if(p!=NULL)
	{
		q[i]=p->data;
		trans2(p->lchild,q,2*i);
		trans2(p->rchild,q,2*i+1);
	}
}
