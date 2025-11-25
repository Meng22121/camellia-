#include<stdio.h>
int main()
{
    int YEAR;
    int CENTURY;
    printf("输入:");
    printf("YEAR=");
    scanf("%d",&YEAR);
    if(YEAR>0)
    {
        CENTURY=(YEAR+99)/100;
        printf("输出:");
        printf("CENTURY=%d",CENTURY);

    }
    else
    {
        printf("输出:");
        printf("年份不能为0或负数!");
    }
    return 0;
    
    
}