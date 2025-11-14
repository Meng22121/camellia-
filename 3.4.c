#include<stdio.h>
	char c;
	int total=0;
	char chioce;
	int wprice=5;
	int oprice=10;
	int tprice=7;
	int cprice=8;
	int change()
	{
		int newPrice;
		printf("输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：");
		scanf(" %c",&c);
		printf("输入新价格:");
		scanf("%d",&newPrice);
		   switch (c)
		{
        case 'W':
            wprice = newPrice;
            printf("将小麦价格更改为 %d 金币\n", newPrice);
            break;
        case 'O':
            oprice = newPrice;
            printf("将洋葱价格更改为 %d 金币\n", newPrice);
            break;
        case 'T':
            tprice = newPrice;
            printf("将西红柿价格更改为 %d 金币\n", newPrice);
            break;
        case 'C':
            cprice = newPrice;
            printf("将胡萝卜价格更改为 %d 金币\n", newPrice);
            break;
        default:
            printf("无效的收入类型。\n");
        }    
    }
    int add()
    {
	    int a;   
		printf("请输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：\n");
		scanf(" %c",&c);
		printf("请输入您出售的公斤数：\n");
		scanf("%d",&a);
		switch(c)
		{
			case'W':
				total=wprice*a;
				break;
			case'O':
				total=oprice*a;
				break;
			case'T':
				total=tprice*a;
				break;
			case'C':
				total=cprice*a;
				break;
		    default:
			    total=0;
		}
		total=total+total;
		printf("您已获得%d个金币，可以休息一下了。\n",total);
	   
    }
int main()
{
    while(total<1000)
    {
    	printf("选择菜单（修改价格 [M]，出售 [S]）：");
	    scanf(" %c",&chioce);
	    switch(chioce)
	    {
	    case'M':
		    change();
		       break;
	    case'S':
	        add();
	        break;
	    }
	
    }
   return 0;
}
   

	
	