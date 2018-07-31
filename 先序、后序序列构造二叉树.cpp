BTNode* CreateBT1(char *pre,char *middle,int n)
{
	if(n<=0)
		return NULL;
		
	else
	{
		BTNode *t=(BTNode*)malloc(sizeof(BTNode));
		t->data=*pre;
		
		BTNode *p=middle;
		while(*p!=*pre)
		{
			p++;   
		}
		k=p-middle;
		t->lchild=CreateBT1(pre+1,middle,k);
		t->rchild=CreateBT1(pre+k+1,p+1,n-k-1);
		return t;
	}
}
