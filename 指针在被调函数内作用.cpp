#include<stdio.h>
int f(int *a){
	++*a;   /*      *�����ȼ�����++       */ 
}

main(){
	int a=5+5;
	f(&a);
	printf("a=%d",a);
}
