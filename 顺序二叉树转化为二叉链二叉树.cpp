BTNode* Shift(char a[],int i)
{
	if(a[i]=='\0')
		return NULL;
		
	if(i>n+1)
		return NULL;
		
	BTNode *t=(BTNode*)malloc(sizeof(BTNode));
	t->data=a[i];
	t->lchild=Shift(a,2*i);
	t->rchild=Shift(a,2*i+1);
	return t;
}
