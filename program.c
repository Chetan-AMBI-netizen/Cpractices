#include<stdio.h>
#include<math.h>

void add(float a, float b);
void sub(float a, float b);
void multi( float a, float b);
void  divide(float a, float b);
void power(int a , int b);
int main()
{
    float n1,n2;
    int base,exp;
    int choice;
    do{

    
    printf("==== choose your operation ====\n");
    printf("1. addition\n");
    printf("2. substraction\n");
    printf("3. multiplication\n");
    printf("4.division\n");
    printf("5. power\n");
    
        printf("enter your choice:- ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("enter N1 and N2:- ");
            scanf("%f %f",&n1,&n2);
            add(n1,n2);
            break;
            case 2:
            printf("enter N1 and N2:- ");
            scanf("%f %f",&n1,&n2);
            sub(n1,n2);
            break;
             case 3:
             printf("enter N1 and N2:- ");
            scanf("%f %f",&n1,&n2);
            multi(n1,n2);
            break;
            case 4:
            printf("enter N1 and N2:- ");
            scanf("%f %f",&n1,&n2);
            divide(n1,n2);
            break;
            case 5:
            printf("enter base and exponent:- ");
            scanf("%d %d",&base,&exp);
            power(base,exp);
            break;
            default:
            printf("invalid choice, please choose between 1 to 5");
        
        }
    }while(choice>=1&& choice<=5);
    

        return 0;
    }





void add(float a, float b)
{
    printf("the sum  of %f and %f is:- %f",a,b,a+b);
    
}
void sub(float a, float b){
    printf("the difference of %f and %f is:- %f",a,b,a-b);

}
void multi(float a, float b){
    printf("the multiplication of %f and%f is:- %f",a,b,a*b);
}
void divide( float a, float b){
    if(b!=0){
        printf("the division of %f and %f is:- %f",a,b, a/b);

    }
    else{
        printf("division by zero is not defined or not supported");
    }
}
void power(int a, int b){
    printf("the power of %d to %d is:- %f" ,a,b, pow(a,b));
}







