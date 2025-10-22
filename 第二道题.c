#include<stdio.h>
int main()
{
	float a;
	float b;
	char  c;
	printf("请选择你需要的计算方式\n");
	scanf("%c",&c);
	printf("请分别输入两个数\n");
	scanf("%f %f",&a,&b);
	switch(c){
		case'+':
		printf("%f+%f的结果是%f\n",a,b,a+b);
		break;
		case'-':
		printf("%f-%f的结果是%f\n",a,b,a-b);
		break;
		case'*': 
		printf("%f*%f的结果是%f\n",a,b,a*b);
		break;
		case'/':
		printf("%f/%f的结果是%f\n",a,b,a/b);
		break;
	return 0;
	}
}
