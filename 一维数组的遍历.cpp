#include <stdio.h>
main()
{
	int i;
	#define number 10
	int count[number]={0};	
	for(i=0;i<number;i++){
		scanf("%d",&count[i]); //Ϊʲô����Ҫ���������֮���ո񣿣����������� 
	}
    
	for(i=0;i<number;i++){
		printf("%d ",count[i]);
	}
}                                   
