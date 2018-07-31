#include <stdio.h>
#include <malloc.h>
#define maxsize 100

typedef int elemtype;

typedef struct {
	elemtype  data[maxsize];
	int length;
}SqList;

void CreateList(SqList *&L,elemtype a[],int n)
{
	L=(SqList *)malloc(sizeof(SqList));
	int i=0;
	for(i=0;i<maxsize;i++){
		L-> data[i]=a[i];
	}
	L->length =n;
}  

int main()
{
	SqList *L=(SqList *)malloc(sizeof(SqList));
	elemtype  a[]={1,2,3,4,5,6,7,8,9,10};
	CreateList(&L,a[],10);	
}



