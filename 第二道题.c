#include<stdio.h>
int main()
{
	float a;
	float b;
	char  c;
	printf("��ѡ������Ҫ�ļ��㷽ʽ\n");
	scanf("%c",&c);
	printf("��ֱ�����������\n");
	scanf("%f %f",&a,&b);
	switch(c){
		case'+':
		printf("%f+%f�Ľ����%f\n",a,b,a+b);
		break;
		case'-':
		printf("%f-%f�Ľ����%f\n",a,b,a-b);
		break;
		case'*': 
		printf("%f*%f�Ľ����%f\n",a,b,a*b);
		break;
		case'/':
		printf("%f/%f�Ľ����%f\n",a,b,a/b);
		break;
	return 0;
	}
}
