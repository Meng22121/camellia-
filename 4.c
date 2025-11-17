#include<stdio.h>
#include<string.h>
void menu();
void study();
void friend();
void money();
void technology();
int main()
{
    char code[7];
    int num;
    const char rightcode[]="300400";
    char name[]="张三";
    int number=13;
    char sex[]="男";

    printf("please enter your password:\n");
    //验证密码
    while(num<3)
    {
        printf("请输入六位数密码：");
        scanf("%s",&code);
        if(strcmp(code,rightcode)==0)
        {
            printf("密码正确！欢迎登陆！\n");
            printf("姓名：%s\n学号：%d\n性别：%s\n",name,number,sex);
            break;
        }
        else
        {
            num++;

            if(num<3)
            {
                printf("密码错误！请重新输入(剩余%d次机会)",3-num);
            }
            else
            {
                printf("连续三次密码错误！\n");
                if(strcmp(sex,"男")==0)
                {
                    printf("you are a bad boy\n");
                }
                else
                {
                    printf("you are a bad girl\n");
                }
                return 0;

            }
        }
        
            
        
    } 
    
    int choice;
    //
    do
    {
        menu();
        printf("请选择功能(输入对应的数字): ");
        scanf("%d",&choice);
        switch(choice)  
        {
            case 1:
                study();
                break;
            case 2:
                friend();
                break;
            case 3:
                money();
                break;
            case 4:
                technology();
                break;
            case 0:
                printf("程序已退出，再见！\n");
                break;
            default:  // default分支处理无效输入
                printf("输入无效，请重新选择！\n");
        }
        if(choice == 0)  // 输入0时退出循环
            break;
    }while(choice!=0);
    
        printf("\n");

    
    
      
    return 0;
    
}

void menu()
{
    printf("==========================\n");
    printf("        菜单功能           \n");
    printf("1、我要好好学习\n");
    printf("2、我要女朋友/男朋友\n");
    printf("3、我要变有钱\n");
    printf("4、我要变技术大佬\n");
    printf("0、退出程序\n");
    printf("==========================\n");
}
void study()
{
    int n;

    printf("请输入一个正整数\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Care for mentally retarded children, we stay together");
        return ;
    

    }
    
    printf("乘法口诀表(%d*%d)：\n");
    for(int i=1;i<=n;i++)
    {
    	
        for (int j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d\n",j,i,i*j);
        }
        printf("\n");
    }

}
void friend()
{
    char sex[]="男";
    if(strcmp(sex,"男")==0)
    {
        printf("吾日三省吾身，高否，帅否，富否，否，滚去学习\n");
        study();
    }
    else
    {
        printf("仙女和凡人谈恋爱是违反天条的，仙女应该好好学习\n");
        study();
    }
}
void money()
{
    char choa;
    printf("有钱后想干什么？\n");
    printf("A.找女朋友(男朋友)\n");
    printf("B.买同济版高等数学，好好学习\n");
    printf("输入A/B:\n");
    scanf(" %c",&choa);
    switch (choa)
    {
    case 'A':
        study();
        break;
    case'B':
        friend();
        break;
    default:
        break;
    }
}
void technology()
{
    int chob;
    int n;

    printf("你为什么学技术？\n");
    printf("A.为了变有钱\n");
    printf("B. 因为我热爱学习\n");
    printf("输入A/B：\n");
    scanf(" %c",&chob);
    switch (chob)
    {
    case 'A':
        friend();
        break;
    case'B':
        study();
        if (n<=0)
        {
            printf("You are such a sweet little fool");
        }
    
    default:
        break;
    }

}
