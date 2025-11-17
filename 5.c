#include<stdio.h>
#include<string.h>
struct student
    {
        char name[];
        int number;
        int sex;      //数字0为男性，数字1为女性
    };
void swap(struct student *pa,struct student *pb)
{
    struct student t = *pa;
    *pa = *pb;
    *pb = t;
}
int main()
{
    struct student stu1,stu2;
    strcpy(stu1.name,"张三");
    stu1.sex=0;
    stu1.number=21;
    strcpy(stu2.name,"李四");
    stu2.sex=0;
    stu2.number=17;
    printf("交换前\n");
    printf("姓名：%s\n",stu1.name);
    printf("学号：%d\n",stu1.number);
    printf("性别：%d\n",stu1.sex);
    printf("姓名：%s\n",stu2.name);
    printf("学号：%d\n",stu2.number);
    printf("性别：%d\n",stu2.sex);

    swap(&stu1,&stu2);
    printf("交换后\n");
    printf("姓名：%s\n",stu1.name);
    printf("学号：%d\n",stu1.number);
    printf("性别：%d\n",stu1.sex);
    printf("姓名：%s\n",stu2.name);
    printf("学号：%d\n",stu2.number);
    printf("性别：%d\n",stu2.sex);

    

    return 0;
}