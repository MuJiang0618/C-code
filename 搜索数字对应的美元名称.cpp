#include <stdio.h>

    int amount[]={1,5,10,25,50};
    const char *name[]={"penny","nickle","dime","quarter","half-dollar"};
 
    int search(int key,int a[])           这个程序有错误，当把数组传进函数，实际传入的是指针， sizeof(a)/sizeof(a[0])等于8（指针变量的大小）除以4(数组元素a[0]等于2  
{
	int i;	 
	int cnt=-1;
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
	{
		if(key == a[i])
		{
			cnt=i;
			break;
		}
	}
	printf("%d",sizeof(a)/sizeof(a[0]));
	return cnt;
}

  main()
{
     int k;
     scanf("%d",&k);
     int b=search(k,amount);
	if(b>-1)
	{
	  printf("%s\n",name[b]);
	} else 
	{
		printf("%d",b);
	}
}
