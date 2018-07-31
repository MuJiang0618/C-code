bool Pop(SqStack *&s,ElemType &e)
{
	if(s->top==-1)
	return false;
	e=s->data[s->top];
	s->top--;
	return true;
} 
