bool fun(ElemType data[])
{
	int i;	SqStack *st;  ElemType e;
	InitStack(st);
	for(i=0;data[i]!='\0';i++)
	{
		Push(st,data[i]);		//��˳����ջ 
	}
	
	for(i=0;data[i]!='\0';i++)    // i ��0��ʼ����ΪҪ������ͷ���Ƚϣ�pop�ĳ�ջ������һ���� 
	{
		Pop(st,e);              
		if(data[i]!=e)
		{
			DestroyStack(st);
			return false;
		}
	}
		DestroyStack(st);
		return true;		
}
