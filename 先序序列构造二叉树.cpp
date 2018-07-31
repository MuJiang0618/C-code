BTNode* CreateBTNode1(char *pre,char *middle,int n)
{
	char *q;int k;
	BTNode *t=(BTNode*)malloc(sizeof(BTNode));
	t->data=*pre;
	for(q=middle;q<middle+n;q++)
	{
		if(*q==*pre)
		break;
	}
	k=q-middle;   //中序序列的根节点的下标 
	t->lchild=CreateBTNode1(pre+1,middle,k);
	t->rchild=CreateBTNode1(pre+1+k,q+1,n-k-1);
	return t;	
}
