 #include <stdio.h>
 main()
 {
 	printf("������һ������x��\n");
 	int a,x;
 	scanf("%d",&x);
 	if((x>(-5))&&(x<0)){
 		a=1;
 	}
 	else if(x==0){
 		a=2;
	} else {
		if((x>0)&&(x<6))
		a=3;
	}
 	switch(a){
 		case 1 :
		 printf("x��Ӧ��yֵΪ%d\n",x);break;
		case 2:
			printf("x��Ӧ��yֵΪ%d\n",x-1);break;
		case 3:
			printf("x��Ӧ��yֵΪ%d\n",3*x+1);break;
}
}
	 
