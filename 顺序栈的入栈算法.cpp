bool Push(SqStack *&s,int e)
{
	if(s->top==MaxSize-1)    //ջ����� 
	return false;
	s->top++;
	s->data[s->top]=e;  //��ֱ����data[top]=e ����Ϊ��û��top���ֱ�Ӷ���ı�����top����s��ָ��Ľṹ���еı��� 
	return true;
}
