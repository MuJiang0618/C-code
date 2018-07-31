#include "stdio.h" 
main() 
{ 
 for(int i=1;i<10;i++)
 {
 	for(int j=i;j<10;j++)
 	{
 		printf("%d*%d=%d\n",i,j,i*j);
 	}
 }

}
