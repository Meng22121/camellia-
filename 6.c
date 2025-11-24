#include <stdio.h>
#include <stdlib.h>

// 定义结构体
struct Student {
    char name[50];      // 姓名的全拼
    char number[20];        // 学号
    char gender;        // 性别（N代表男生，M代表女生）
    float height;       // 身高（单位：米）
};

// 自定义字符串比较函数
int my_strcmp(const char *str1, const char *str2) {
    // 遍历两个字符串，直到遇到不同的字符或字符串结束
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
    }
    // 返回字符的ASCII码差值
    return *str1 - *str2;
}

// 自定义字符串复制函数
void my_strcpy(char *dest,const char *src)
{
    if(dest == NULL|| src == NULL)
    {
        return NULL;
    }
    char *ptr=dest;
    while(*src != '\0')
    {
        *ptr++ = *src++;
    }
    *ptr='\0';
    return dest;
}


// 显示菜单函数
void menu(struct Student *stu) {
    printf("\n菜单：\n");
    printf("1. 姓名：%s\n", stu->name);
    printf("2. 学号：%s\n", stu->number);
    printf("3. 性别：%c\n", stu->gender);
    printf("4. 身高：%.2f\n", stu->height);
    printf("5. 退出登陆\n");
    printf("请选择操作（1-5）：");
}

// 登录函数
int login()
{
	char usename[30];
    char password[30];
    int num=5;
    char rightname[]="zhangsan";
    char rightword[]="211730";
    
    while(num>0)
    {
        num--;
        printf("输入用户名：\n");
        scanf("%s",&usename);
        printf("输入密码；\n");
        scanf("%s",&password);
        if(my_strcmp(usename,rightname)==0 
        && my_strcmp(password,rightword)==0)
        {
            printf("登录成功\n");
            return 1;

        }
        else
        {
            if(num>0)
            printf("“用户名或密码输入错误，还有%d次机会，请重新输入\n",&num);
            else
            {
                
                
                printf("哼，渣男，骗子\n");
               
                return 0;
                

            }
        }

    }
    return 0;
} 

int main() {
    // 定义结构体变量并初始化
    struct Student student;
    my_strcpy(student.name,"zhangsan");
    my_strcpy(student.number,"211730");
    student.gender='N';
    student.height=1.80;
    
    // 指针使用：创建指向结构体的指针
    struct Student *stu_a = &student;
    
    // 登录验证
    if (!login()) {
        return 0;  // 登录失败，程序退出
    }
    
    int choice;
    char new_name[50];
    char new_number[20];
    char new_gender;
    float new_height;
    
    // 主程序循环
    while (1) {
        menu(stu_a);  // 使用指针访问结构体
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("输入新的姓名：");
                scanf("%s", new_name);
                my_strcpy(stu_a->name, new_name);  // 使用指针修改结构体成员
                printf("姓名已更新\n");
                break;
                
            case 2:
                printf("输入新的学号：");
                scanf("%s", new_number);
                my_strcpy(stu_a->number, new_number);  // 使用指针修改结构体成员
                printf("学号已更新\n");
                break;
                
            case 3:
                printf("输入新的性别（N代表男生，M代表女生）：");
                scanf(" %c", &new_gender);  // 注意空格，避免读取之前的换行符
                stu_a->gender = new_gender;  // 使用指针修改结构体成员
                printf("性别已更新\n");
                break;
                
            case 4:
                printf("输入新的身高（单位：米）：");
                scanf("%f", &new_height);
                stu_a->height = new_height;  // 使用指针修改结构体成员
                printf("身高已更新\n");
                break;
                
            case 5:
                printf("已退出运行\n");
                return 0;
                
            default:
                printf("无效选择，请重新输入\n");
                break;
        }
    }
    
    return 0;
}