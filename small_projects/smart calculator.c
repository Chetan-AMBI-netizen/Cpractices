#include <stdio.h>
void calculator();
int main(){
    calculator();
    return 0;
}
void calculator(){
    char operator;
    float num1,num2,result;
    printf("enter an operator (+, -, *, /):\n");
    scanf("%c",&operator);
    printf("enter two numbers:\n");
    scanf("%f %f",&num1,&num2);
    switch(operator){
        case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f",num1,num2,result);
        break;

        case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f",num1,num2,result);
        break;

        case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f",num1,num2,result);
        break;

        case '/':
        if(num2 != 0){
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f",num1,num2,result);
        }
        else{
            printf("Error: Division by zero is not allowed.");
        }
        break;

        default:
        printf("Error: Invalid operator.");
    }
}