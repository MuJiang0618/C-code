bool fun(ElemType data[])
{
	int i;	SqStack *st;  ElemType e;
	InitStack(st);
	for(i=0;data[i]!='\0';i++)
	{
		Push(st,data[i]);		//按顺序入栈 
	}
	
	for(i=0;data[i]!='\0';i++)    // i 从0开始是因为要拿正序和反序比较，pop的出栈序列是一定的 
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
