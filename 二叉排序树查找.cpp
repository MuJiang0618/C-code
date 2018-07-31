BSTNode* SearchBST(BSTNode *b,ElemType k)
{
	if(b==NULL || b->key==k)
	return b;
	
	if(k<b->key)
	return SearchBST(b->lchild,k);
	
	else
	return SearchBST(b->rchild,k);
}
