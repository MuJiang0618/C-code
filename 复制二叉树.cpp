¸´ÖÆ¶þ²æÊ÷
BTNode* Copy(BTNode *b) 
{
	if(b!=NULL)
	{
		BTNode *t;
		t=(BTNode*)malloc(sizeof(BTNode));
		t->data=b->data;
		t->lchild=Copy(b->lchild);
		t->rchild=Copy(b->rchild);
		return t;  
	}
	else
		return NULL;
}
