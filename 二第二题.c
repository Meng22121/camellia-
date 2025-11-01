#include<stdio.h>
int main()
{
	char a;
	int b;
	int e;
	int total;
	char o;
	while(1)
	{
		printf("输入N计算新订单\n");
	    printf("输入Q结束程序\n");
    	printf("输入:\n");
	    scanf(" %c",&a);
	    if(a=='N')
	    {
		    printf("输入比萨数量\n");
		    scanf("%d",&b);
		    printf("输入比萨配料数量\n");
	    	scanf("%d",&e);
	      	total=20*b+2*e;
		
	     	printf("是否需要外送？(Y/N)\n");
		    scanf(" %c",&o);
		    if(o=='Y')
	    	{
			    total=total+5;
			    printf("订单价格为%d个金币\n",total);
		    }
	    	else
		    {
			    printf("订单价格为%d个金币\n",total);
		    }
	    }
    	else
	    {
		    printf("结束程序\n"); 
	    }

	}
	return 0;

}
