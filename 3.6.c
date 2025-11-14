#include<stdio.h>
int main()
{
    struct snake
    {
        int length;
    };
    struct snake sna;
    sna.length = 3;
    int food;
    printf("请输入食物大小；");
    scanf("%d",&food);
    if(food>sna.length)
    {
        printf("蛇吃了比它大的食物，它会死。\n");
    }
    else
    {
        sna.length+=food;
        printf("蛇的长度为：%d",sna.length);
    }
    return 0;


}