#include <stdio.h>

    int amount[]={1,5,10,25,50};
    const char *name[]={"penny","nickle","dime","quarter","half-dollar"};
 
    int search(int key,int a[])           ��������д��󣬵������鴫��������ʵ�ʴ������ָ�룬 sizeof(a)/sizeof(a[0])����8��ָ������Ĵ�С������4(����Ԫ��a[0]����2  
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
