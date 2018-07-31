#include <stdio.h>
main()
{
	int i;
	#define number 10
	int count[number]={0};	
	for(i=0;i<number;i++){
		scanf("%d",&count[i]); //为什么必须要在输入的数之间打空格？？？？？？？ 
	}
    
	for(i=0;i<number;i++){
		printf("%d ",count[i]);
	}
}                                   
