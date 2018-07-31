BTNode* CreateBTNode2(char* post,char* in,int n)
{
	char ch,*p; int k;
	if(n<=0) return NULL;
	BTNode *root=(BTNode *)malloc(sizeof(BTNode));
	ch=*(post+n-1);
	root->data=ch;
	for(p=in;p<in+n;p++)
	{
		if(*p==ch) break;
	}
	k=p-in;   //中序序列中根节点的下标,也是左子树元素的个数 
	root->lchild=CreateBTNode2(post,in,k);
	root->rchild=CreateBTNode2(post+k,p+1,n-k-1);   //函数参数分别为该子树在后序序列中开始的位置，中序序列中开始的位置，元素个数
	return root; 
}
