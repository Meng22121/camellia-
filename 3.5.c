#include<stdio.h>
int main()
{
    int grid[3][3];
    int a,b;
    for (a=0;a<3;a++)
    {
        printf("请输入数字：");
        scanf("%d %d %d",&grid[a][0],&grid[a][1],&grid[a][2]);
    }
    for (a=0;a<3;a++)
    {
        if (grid[a][0]==grid[a][1]||grid[a][0]==grid[a][2]||grid[a][1]==grid[a][2])
        {
            printf("错误！你无法走出这里\n");
            return 0;

        }
        
    }
    for (b=0;b<3;b++)
    {
        if (grid[0][b]==grid[1][b]||grid[0][b]==grid[2][b]||grid[1][b]==grid[2][b])
        {
            printf("错误！你无法走出这里\n");
            return 0;

        }
    }
    printf("正确！你可以走出这里\n");
    return 0;
}