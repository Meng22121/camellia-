#include<stdio.h>
int main()
{
	char a;
	int b;
	int e;
	int total;
	char o;
	while(1)
	{
		printf("����N�����¶���\n");
	    printf("����Q��������\n");
    	printf("����:\n");
	    scanf(" %c",&a);
	    if(a=='N')
	    {
		    printf("�����������\n");
		    scanf("%d",&b);
		    printf("���������������\n");
	    	scanf("%d",&e);
	      	total=20*b+2*e;
		
	     	printf("�Ƿ���Ҫ���ͣ�(Y/N)\n");
		    scanf(" %c",&o);
		    if(o=='Y')
	    	{
			    total=total+5;
			    printf("�����۸�Ϊ%d�����\n",total);
		    }
	    	else
		    {
			    printf("�����۸�Ϊ%d�����\n",total);
		    }
	    }
    	else
	    {
		    printf("��������\n"); 
	    }

	}
	return 0;

}
