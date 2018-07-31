
#include <stdio.h>

void DeleElem(SqList *&L,int x)
{
	int i=0,k=0;
	for (i=0;i<L->length;i++)
	{
		if(L->data[i]==x)
		{
			k++;
		}
		L->data[i-k]=L->data[i];
	}
	L->length-=k;
}
