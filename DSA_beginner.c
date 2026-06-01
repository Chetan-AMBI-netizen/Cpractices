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
/*int main(){
    int price[5];
    for (int i=0; i<5; i++){
        printf("entr %d price:\n",i);
        scanf ("%d",&price[i]);
    }
    for (int i=0; i<5; i++){
        printf("the  product %d  price is %d\n:", i, price[i]);

    }
     int  prod1=price[0] *0.18;
    int prod2 =  price[1]*0.18;
    int prod3 = price[2]*0.18;
    int prod4 = price[3]*0.18;
    int prod5 = price[4]*0.18;
    int total = prod1 + prod2 + prod3 + prod4 + prod5;
    int total_price = (price[0] + prod1) + (price[1] + prod2) + (price[2]+prod3) + (price[3]+prod4) + (price[4] + prod5);
    int total_GST = (prod1+prod2+prod3+prod4+prod5);
     printf("the total products price is:%d\n",total_price);
     printf("the total GST of all products is:-%d",total_GST);
    return 0;
}
    */

//   REVERSE ARRAY PROBLM  //
/* int main(){
    int arr[] = {100,200,300,400,500};
    int n = 5;
    int start= 0;
    int end  = n-1;
    while(start<end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    }
    printf("reverse of an array\n");
    for (int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }


    return  0;

}
    */
   
// Create a FUNCTION to calculate the odd numbers in 1D array//
 /*int countingodd(int arr[], int n);
int main(){
    int arr[]= {10,11,12,13,14,15,16,17,18,19};
    printf( "%d", countingodd(arr,10));
    return 0;

}
int countingodd(int arr[], int n){
    int count =0;
    for (int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        
        
        }
    }
    return count;

}
    */
//  finding the second largest element//
int secondlargest(int arr[], int n){
    int largest = arr[0];
    int second = -1;
    for (int i=1; i<n; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];

        }
        else if (arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int n;
    printf("enter no.of elements:\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
    }
     int result = secondlargest(arr,n);
     if(result = -1){
        printf(" not possible to find");
     }
     else
     printf("the second largest element is:%d\n", result);
     return 0; 
    }





