//输出根节点到每个叶子节点的逆路径
void Disp(BTNode *t) 
{
	struct node
	{
		BTNode *p;
		int parent;
	}qu[Maxsize];
	
	int front=rear=-1;
	rear++;
	qu[rear].p=t;
	qu[rear].parent=-1;
	
	while(rear!=front)
	{
		front++;
		BTNode *q=qu[front].p;
		if(q->lchild==NULL && q->rchild==NULL)  //q为叶子节点 
		{
			int pre=front;
			while(qu[pre].parent!=-1)
			{
				printf("%c ",qu[pre].p->data);
				pre=qu[pre].parent;
			}
			printf("%c",qu[pre].p->data);			
		}
		
		else if(q->lchild!=NULL)
		{
			rear++;
			qu[rear].p=q->lchild;
			qu[rear].parent=front;
		}
		
		else if(q->rchild!=NULL)
		{
			rear++;
			qu[rear].p=q->rchild;
			qu[rear].parent=front;
		}
	}
}
