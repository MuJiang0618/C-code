void LevelOrder(BTNode *t)
{
	BTNode *Quere[Maxsize];
	int front=0,rear=0;
	rear=(rear+1)%Maxsize;
	Quere[rear]=t;
	while(rear!=front)
	{
		front=(front+1)%Maxsize;
		printf("%c",Quere[front]->data);
		if(t->lchild!=NULL)
		{
			rear=(rear+1)%Maxsize;
			Quere[rear]=t->lchild;
		}
		
		if(t->rchild!=NULL)
		{
			rear=(rear+1)%Maxsize;
			Quere[rear]=t->rchild;
		}
	}
}
