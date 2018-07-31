#include <stdio.h>
main()
{
	int mylen(const char *q);
     char *string="I love you";
    printf("字符串a的长度是%d\n",mylen(string));
}
 int mylen(const char *a){
 	int cot=0;
 	while(a[cot]!='\0'){
 		cot++;
 	}   
 	return cot;
 }
