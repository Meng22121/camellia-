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
		printf("�������������ͣ�С�� [W]����� [O]�������� [T] ����ܲ� [C]����\n");
		scanf(" %c",&e);
		printf("�����������۵Ĺ�������\n");
		scanf("%d",&d);
		total=total+add (e, d);
		

	}
	printf("���ѻ��%d��ң�������Ϣһ����.\n",total);
	return 0;
}
