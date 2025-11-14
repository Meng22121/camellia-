#include<stdio.h>
int main()
{
    int a,b;
    int c,e;
    printf("输入一个数字:\n");
    scanf("%d",&a);
    printf("输入一个数字:");
    scanf("%d",&b);
    while(a)
    {
        c=a%10;
        a=a/10;
        if(b==c)
        {
            e=e+1;
        }
    }
    printf("%d在自然数中出现了%d次",b,e);
    return 0;

    
}