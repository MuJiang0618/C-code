#include <stdio.h>
#include <stdlib.h>
main()
{ 
   int *p=NULL;
   int number,i,j,t;
   printf("������Ҫ��������ĸ���\n");
    scanf("%d",&number);
   p=(int *)malloc(number*sizeof(int));
    printf("������Ҫ�Ƚϵ���\n"); 
   for(i=0;i<number;i++){
   	scanf("%d",&p[i]);
    }
     for(i=0;i<number-1;i++){
  	  for(t=0;t<number-i-1;t++){
  		while(p[t]<p[t+1])  {
  		 j=p[t];p[t]=p[t+1];p[t+1]=j;
  		}
  	}
  }
  
 	for(i=0;i<number;i++){
  	   printf("%d ",p[i]);
  	}
  free(p);
}



