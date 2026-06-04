#include<stdio.h>
void swapbyvalue(int a,  int b){
    int t = a;
    a=b;
    b=t;
    printf("after calling  by value x = %d and y = %d", a, b);
}
void swapbyreferance(int *a , int *b){
    int t = *a;
    *a=*b;
    *b =t;
}
 int main(){
    int x ,y;
    printf("enter the val;ue of x and y :-");
    scanf("%d%d", &x, &y);

    swapbyvalue(x, y);
    printf("in main unchanged x = %d and y = %d", x, y);
    printf("\n");
    swapbyreferance(&x, &y);
    printf("after calling by reference x = %d and y = %d", x, y);
    return 0;
}