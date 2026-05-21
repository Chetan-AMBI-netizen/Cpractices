#include<stdio.h>
/*float rectanglearea(float length, float breadth);
float circelarea(float radius);
float squarearea(float side);
int main()
{

    /*printf("area of rectangle is %.2f\n",rectanglearea(5.0,3.0));           
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
// celsius to fahrent conversation using function//
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
}
