BTNode* CreateBT1(char *post,char *middle,int n)
{
	if(n<=0)
		return NULL;
		
	else
	{
		BTNode *t=(BTNode*)malloc(sizeof(BTNode));
		t->data=*(post+n-1);
		
		BTNode *p=middle;
		while(*p!=t->data)
		{
			p++;   
		}
		int k=p-middle;
		t->lchild=CreateBT1(post,middle,k);
		t->rchild=CreateBT1(post+k,p+1,n-k-1);
		return t;
	}
}
