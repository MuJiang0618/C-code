//½»»»×óÓÒ×ÓÊ÷£¬²»ÆÆ»µÔ­Ê÷
void Exchange(BTNode *t,BTNode *&b) 
{
	if(t!=NULL)
	{
		b=(BTNode*)malloc(sizeof(BTNode));
		b->data=t->data;
		Exchange(t->rchild,b->lchild);
		Exchange(t->lchild,b->rchild);
	}
	else
		b=NULL;
}
