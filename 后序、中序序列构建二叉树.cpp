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
	k=p-in;   //���������и��ڵ���±�,Ҳ��������Ԫ�صĸ��� 
	root->lchild=CreateBTNode2(post,in,k);
	root->rchild=CreateBTNode2(post+k,p+1,n-k-1);   //���������ֱ�Ϊ�������ں��������п�ʼ��λ�ã����������п�ʼ��λ�ã�Ԫ�ظ���
	return root; 
}
