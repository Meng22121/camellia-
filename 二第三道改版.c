#include<stdio.h>
int main()
{
	int total;
	char c;
	int a;
	while(total<1000)
	{
		printf("�������������ͣ�С�� [W]����� [O]�������� [T] ����ܲ� [C]����\n");
		scanf(" %c",&c);
		printf("�����������۵Ĺ�������\n");
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
	printf("���ѻ��%d��Ϣһ���ˡ�\n",total); 
	return 0;
}
