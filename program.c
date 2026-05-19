#include <stdio.h>
void calci();
int main(){
    calci();
    return 0;

}
void calci(){
    int choice;
    int num1,num2,result;

    printf("enter 1 for addition\n");
    printf("enter 2 for subtraction\n");    
    printf("enter 3 for multiplication\n");
    printf("enter 4 for division\n");
    printf("enter your choice:-\n");
    scanf("%d",&choice);

    printf("enter two numbers:-\n");
    scanf("%d %d",&num1,&num2);
    if(choice == 1){
        result = num1 + num2;
        printf("the sum of %d and %d is:- %d",num1,num2,result);
    }
    else if(choice == 2){
        result = num1-num2;
        printf("the difference of %d and %d is:- %d", num1,num2,result);
    }
    else if(choice == 3){
        result = num1*num2;
        printf("the multiplication of %d an %d is:- %d",num1,num2,result);
    }
    else if (choice == 4){
        if(num2!=0){
            result = num1/num2;
            printf("the division of %d and %d is:- %d",num1,num2,result);

        }
        else{
            printf("Error: Division by zero is not allowed.");
        }
    }
}