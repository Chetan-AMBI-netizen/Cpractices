#include<stdio.h>
#include<string.h>
union employee{
    char name[40];
    int salary;
    int income;
};
int main(){
    union employee e1;
    strcpy(e1.name,"chetan");
    e1.salary = 100000;
    e1.income = 200000;
    printf("%d\n",e1.income);
    printf("%s\n",e1.name);
    printf("%d\n",e1.salary);
    return 0;
}