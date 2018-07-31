int bottom(SqStack St)
{
	SqStack tmpst;
	InitStack(tmpst);
	int x,y;
	while(!EmptySqStack(St))
	{
		pop(St,x);
		push(tmpst,x);
	}
	
	while(!EmptySqStack(tmpst))
	{
		pop(tmpst,y);
		push(St,y);
	}
	return x;
	
}
