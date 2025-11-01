#include<stdio.h>
int main()
{
	int total;
	char c;
	int a;
	while(total<1000)
	{
		printf("请输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：\n");
		scanf(" %c",&c);
		printf("请输入您出售的公斤数：\n");
		scanf("%d",&a);
		switch(c)
		{
			case'W':
				total=5*a;
				break;
			case'O':
				total=10*a;
				break;
			case'T':
				total=7*a;
				break;
			case'C':
				total=8*a;
				break;
		default:
			total=0;
		}
		total=total+total;
	}
	printf("您已获得%d休息一下了。\n",total); 
	return 0;
}
