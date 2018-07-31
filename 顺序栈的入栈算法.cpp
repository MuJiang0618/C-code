bool Push(SqStack *&s,int e)
{
	if(s->top==MaxSize-1)    //栈满情况 
	return false;
	s->top++;
	s->data[s->top]=e;  //不直接用data[top]=e 是因为并没有top这个直接定义的变量，top是在s所指向的结构体中的变量 
	return true;
}
