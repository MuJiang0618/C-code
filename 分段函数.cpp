 #include <stdio.h>
 main()
 {
 	printf("请输入一个整数x吼\n");
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
		 printf("x对应的y值为%d\n",x);break;
		case 2:
			printf("x对应的y值为%d\n",x-1);break;
		case 3:
			printf("x对应的y值为%d\n",3*x+1);break;
}
}
	 
