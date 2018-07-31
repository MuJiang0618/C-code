#include<stdio.h>
int f(int *a){
	++*a;   /*      *的优先级高于++       */ 
}

main(){
	int a=5+5;
	f(&a);
	printf("a=%d",a);
}
