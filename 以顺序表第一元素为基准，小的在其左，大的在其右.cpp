#include <stdio.h>
#include <malloc.h>

void move(SqList *&L)
{
	int a=L->data[0];  int i=0; int j=L->length-1;
    while(i<j){
	 while(i<j && L->data[j]>a)
	{
		j--;		
	}
	L->data[i]=L->data[j];
	while(i<j && L->data[i]<=a)
	{
		i++;
	}
	L->data[j]=L->data[i];
  }
  L->data[j]=a;
}
