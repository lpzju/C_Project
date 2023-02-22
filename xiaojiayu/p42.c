#include <stdio.h>

int main(){
    struct Sudent {
        int age;
        char *name;
        // 又一次犯傻，想着把字符串地址赋值给字符串数组
        // char name[]; // 这样的做法比较适合初始化
        // 当然也可以使用strcpy或者一个一个填入
    }stu;
    // char arr[] = "zhangsan";
    // stu.name = arr;
    stu.age = 18;
    char name1[] = "zhangsan";
    stu.name = name1;
    // struct Student ss;
    // ss.name = "lisi";
    // ss.age = 19;
    printf("zhangsan:\nname = %s\n",stu.name);
    printf("age = %d\n",stu.age);
    // printf("lisi,name = %s,age = %d\n",ss.name,ss.age);
    // 结构体中还有结构体
    typedef struct {
        int chinese;
        int math;
    }Score;
    typedef struct {
        int uid;
        char sex;
        Score score;
    }SStudent;
    Score s1 = {80,90};
    SStudent s2 = {2203,'m',s1};
    printf("学生信息：\nuid:%d,sex:%c\n分数:\nchinese:%d,math:%d\n",s2.uid,s2.sex,s2.score.chinese,s2.score.math);
    return 0;
}
