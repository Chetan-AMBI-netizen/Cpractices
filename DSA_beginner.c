#include<stdio.h>
//area of the rectange,square and circle small mini projects//
/* 
float rectanglearea(float length, float breadth);
float circelarea(float radius);
float squarearea(float side);
int main()
{

    rintf("area of rectangle is %.2f\n",rectanglearea(5.0,3.0));           
    printf("area of circle is %.2f\n",circelarea(4.0));
    printf("area of square is %.2f\n",squarearea(6.0));
float length,breadth,side,radius;
printf("enter the length and breadth of rectangle:-\n");
scanf("%f %f",&length,&breadth);
printf("the area of the rectangle is:- %.2f\n",rectanglearea(length,breadth));
printf("enter the radius of the circle:-\n");
scanf("%f",&radius);
printf(" the area of the circle is:- %.2f\n",circelarea(radius));
printf("enter the side of the square:-\n");
scanf("%f",&side);
printf("the area of the square is:- %.2f",squarearea(side));




    return 0;
}
float rectanglearea(float length,float breadth){
    return length*breadth;

}
float circelarea(float radius){
    return 3.14159*radius*radius;
}
float squarearea(float side){
    return side*side;
}
    */


// celsius to fahrent conversation using function mini projects.//
/*
float convert_celsius_fahrenheit(float celsius){


    return (celsius *9.0 /5.0) + 32.0;
}
int main(){
    float celsius,fahrenheit;
    printf("enter a celsius:-");
    scanf ("%f",&celsius);
    fahrenheit = convert_celsius_fahrenheit(celsius);
    printf("%.2f celsius is equal to %.2f fahrenheit",celsius,fahrenheit);
        return 0;
} */
//pointers//
//apna college problems on pointer concept 1) *ptr, *ptr=+5,*ptr++//

/*
int main(){
    int x;
    int *ptr;
    *ptr = &x;
    *ptr = 10;

  printf("%d\n",x); //0//
  printf("%d\n",*ptr);// 10//

  
  *ptr+=5;
  printf("%d\n",x);
  printf("%d\n",*ptr);
  (*ptr)++;
  
  printf("%d\n",*ptr);
  return 0;
  
} */
//swap of a,b on pointers//
/* 
void swap(int *a, int *b);
int main(){
 int  aa = 10, bb= 11;
 swap(&aa,&bb);
 printf("aa = %d\n bb = %d\n", aa,bb);
 return 0;
}
void swap(int *a, int *b){
     int t = *a;
         *a = *b;
         *b = t;
         

} 
*/
// sum,product&average on FUNCTIONS concept//
/*
int sum(int a, int b);
int product(int a, int b);
int average( int a, int b);
int main(){
    int n1,n2;
    printf("enter n1 and n2:-");
    scanf("%d %d", &n1,&n2);
    sum(n1,n2);
    product(n1,n2);
    average(n1,n2);
    printf("the sum of %d and %d is:- %d \n ",n1,n2,sum(n1,n2));
     printf("the product of %d and %d is:- %d\n",n1,n2,product(n1,n2));
      printf("the average of %d and %d is:- %d\n",n1,n2,average(n1,n2));
   return 0; 
}
int sum(int a, int b){
    return a + b;
}
int product(int a,  int b){
    return a * b;
}
int average(int a, int b){
    return (a + b)/2;
}
    */
//print the product price with product GST//
int main(){
    int price[5];
    for (int i=0; i<=price.length; i++){
        printf("enter %d, price:");

        break()
    }
}








