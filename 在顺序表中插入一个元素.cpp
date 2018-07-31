bool InseElem(SqList *&L,int n,int e)
{   
  if(i<1 || i>L->length+1)
 { 
	return false;
 }  
  else 
    {   
        n--;
	    for(int i=L->length-1; i>=n;i--)
	    {
		L->data[i+1]=L->data[i];
	    }
	    L->data[n]=e;
	    L->length++;
	    return true;
	}
}
