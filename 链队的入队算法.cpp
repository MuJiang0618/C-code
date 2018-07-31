void enLiQueue(LiQueue *& q,ElemType e)
{
		QNode *p;
		p=(QNode *)malloc(sizeof(QNode));
		p->data=e;
		p->next=NULL;
		if(LiQueueEmpty)
		{
			q->front=p;q->rear=p;
		}
		else
		{
			q->rear->next=p;
			q->rear=p;
		}
}
