//二叉链转化为顺序二叉树
void Shift1(BTNode *t,SqBTree b,int i) 
{
	if(t!=NULL)
	{
		b.Array[i]=t->data;
		Shift1(t->lchild,b,2*i);
		Shift1(t->rchild,b,2*i+1);
	}
	
	else
		b.Array[i]='\0';
}
