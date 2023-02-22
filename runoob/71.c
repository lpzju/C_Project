#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    char sex[5];
    int age;
}Stu;

void input(Stu *stu){
    int i;
    for(i = 0;i < 5;i++){
        scanf("%s%s%d",stu[i].name,stu[i].sex,&(stu[i].age));
    }
}

void output(Stu *stu){
    int i;
    for(i = 0;i < 5;i++){
        printf("%s %s %d\n",stu[i].name,stu[i].sex,stu[i].age);
    }
}

int main(){
    Stu stu[5];
    input(stu);
    output(stu);
    return 0;
}
