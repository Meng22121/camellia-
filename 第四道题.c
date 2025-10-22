#include<stdio.h>
int main()
{
	printf("请输入你要买几台电脑");
	
	int a;         //定义a
	
	scanf("%d",&a);
	printf("%d台电脑的价格是%f个硬币。\n",a,
	(a*95.125));             //格式化输出 
	return 0; 
	
}
