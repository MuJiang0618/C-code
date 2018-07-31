int width(BTNode *t)
{
	typedef struct
	{
		BTNode *p;
		int depth;
	}WBTNode;
	
	int Array[Maxsize];
	WBTNode qu[Maxsize];
	int front=rear=-1;
	if(t==NULL)
		return 0;
		
	else
	{
		rear++;
		qu[rear].p=t;
		qu[rear].depth=1;
		while(rear!=front)   //队不空出队 
		{
			front++;
			BTNode *p=qu[front].p;
			Array[qu[front].depth]++;
			if(p->lchild!=NULL)
			{
				rear++;
				qu[rear].p=p->lchild;
				qu[rear].depth=qu[front].depth+1;				
			}
			
			if(p->rchild!=NULL)
			{
				rear++;
				qu[rear].p=p->rchild;
				qu[rear].depth=qu[front].depth+1;				
			}
		}
	}
}
