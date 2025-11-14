#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int num[10];
	int i=0;
	int person;
	int broken=0;
	srand((unsigned)time(NULL));   

	while(i<10)
	{
		i++;
		num[i] = 1+rand()%(5-1+1);
		printf("%d号踏板的耐久度为：%d\n",i,num[i]);
	}
	while(1)
	{
		person++;
		int a=1;      //当前位置
		int cross=1;    //假设能通过
		while(a<=10&&cross)
		{
			if(num[a]>0&&a<=10)  //正常通过
			{
				a++;
				num[a]--;
				
			}
			else if(a<=10)    //开始准备跳跃
			{
				int found=0;
				int jump;
				for (jump=1;jump<=4&&a+jump<=10;jump++)     //对跳跃进行条件约束
				{
					
					if(num[a+jump]>0)           //可以跳跃
					{
						num[a+jump]-=jump;
					    a=a+jump;
					    found=1;
					    break;
						
					}
					
					
				}
				if(!found)     //如果不能跳跃时通过的人数跟停留情况
				{
					cross=0;
					broken=a;
					
				}
				else     //可以跳跃时通过的情况
				{
					a++;
					
				}
				
			}
		}
		if (!cross)        //通过假设不成立
		{
			person--;
			break;
		}
		
	}
	if (broken>0)        //输出损坏的踏板
	{
		printf("%d号踏板损坏，无法过桥\n",broken);
		 
	}
	printf("%d人可以通过\n",person);    //输出通过人数
	
	
	


	return 0;
}