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
		printf("按回车键开始计时，或输入任意一个字符退出。\n");
		
	    a = getchar();
		if(a != '\n')
		{
			break;
		}
		start = clock();
		printf("按回车键停止计时。\n");
		b=getchar();
		if(b != '\n')
		{
			break;
		}
		end=clock();
		t=(double)(end - start)/CLOCKS_PER_SEC/60;
		printf("结果:%.3f分钟。\n",t);
		
		
		
	}
	return 0;
}
