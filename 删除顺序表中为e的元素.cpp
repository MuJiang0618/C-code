#include <stdio.h>

void Delete(SqList *&L,e)
{ 
   int k=0; 
   int i=0;
	while (i<L->length)
	{
		if(L->data[i]==e)
		{
			k++;
		}	
		else
		{
		  	L->data[i-k]=L->data[i];
		}
		i++;
	}
	L->length-=k;
}
