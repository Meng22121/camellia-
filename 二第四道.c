#include<stdio.h>
#include<time.h>
int main()
{
	char a,b;
	clock_t start;
	clock_t end;
	double t;
	while(1)
	{
		printf("���س�����ʼ��ʱ������������һ���ַ��˳���\n");
		
	    a = getchar();
		if(a != '\n')
		{
			break;
		}
		start = clock();
		printf("���س���ֹͣ��ʱ��\n");
		b=getchar();
		if(b != '\n')
		{
			break;
		}
		end=clock();
		t=(double)(end - start)/CLOCKS_PER_SEC/60;
		printf("���:%.3f���ӡ�\n",t);
		
		
		
	}
	return 0;
}
