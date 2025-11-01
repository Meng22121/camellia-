#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	while(a<200){
		printf("输入收入:");
		scanf("%d",&b);
		a=a+b;
	}
	printf("恭喜！您已获得%d个金币，现在可以休息了\n",a); 
	return 0;
}
