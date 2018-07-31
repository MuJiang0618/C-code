bool DeleElem(SqList *&L,int n)
{
	int j;
	if(n<1 || n>L->length)
	{
		return 0;
	}
	else
	{   n--;
	    j=n;
		while(j<L->length-1)
		{		
		L->data[j]=L->data[j+1];
		j++;
		}
		L->length++;
		return 1;
	}
}
