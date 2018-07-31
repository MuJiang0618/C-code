#include <stdio.h>
typedef struct Anode
{
	int adjvex;
	struct Anode *nextarc;
	int Infor;
}ArcNode

typedef struct 
{
	int order;
	ArcNode *firstarc;
}VNode

typedef struct
{
	VNode adjlist[4];
	int e,n;
}Graph

main()
{
	Graph *p; ArcNode *q;
	p=(Graph*)malloc(sizeof(Graph));
	int n=4,e=6;
	p->adjlist[0].order=0;
	p->adjlist[1].order=1;
	p->adjlist[2].order=2;
	p->adjlist[3].order=3;
	q=p->adjlist[0].firstarc;
	q->adjvex=3;q->nextarc=NULL;
	
	q=p->adjlist[1].firstarc;
	q=p->adjvex=0;q->nextarc=
	
	
	
	
}

