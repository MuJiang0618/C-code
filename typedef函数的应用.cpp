#include <stdio.h>
main()
{ 
   typedef struct {
   int a;
   int b;
   int c;
         } nmd;    
  nmd f={.a=5,.b=1,.c=19};
  
  printf("%d %d %d\n",f.a,f.b,f.c);
  
}
