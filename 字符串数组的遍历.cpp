#include<stdio.h>
main()
{
char *a="hello";
  int i;
for(i=0;i<5;i++){
  printf("%c ",a[i]);    /*指针变量可以当作数组名来用*/ 
}
}
