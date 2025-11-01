#include<stdio.h>

int add(char c, int a)
{
	int b;
	switch(c)
	{
		case'W':
		    b=5;
		    break;
		case'O':
		    b=10;
		    break;
		case'T':
			b=7;
			break;
		case'C':
			b=8;
			break;
		default:
			b=0;
		
	}
	return a*b;
}
int main()
{
	int total;
	char e;
	int d;
	while(total<1000)
	{
		printf("请输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：\n");
		scanf(" %c",&e);
		printf("请输入您出售的公斤数：\n");
		scanf("%d",&d);
		total=total+add (e, d);
		

	}
	printf("您已获得%d金币，可以休息一下了.\n",total);
	return 0;
}
