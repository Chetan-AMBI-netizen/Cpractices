#include <stdio.h>
#include<string.h>
#include<math.h>
int main(){
/* int marks;
 printf("enter your marks:-\n");
 scanf("%d",marks);
 if(marks>=90){

 
 printf("grade A");
 }
 else if(marks>=75){
 printf("grade B");
 }
else if(marks>=60){
    printf("grade C");
}
else if(marks>=50){
    printf("grade D");
}
else{
    printf("grade F");

}

float x, sum,rad,term;
int i;
printf("enter the angle in degrees:-");
scanf("%f",&x);
rad = x*3.14159/180;
term = rad;
sum = rad;
for ( i = 3;i<=10;  i = i+2){
   term = (-term*rad*rad)/(i*(i-1));
    sum  = sum + term;
    printf("the value of sin(%f) = %f",x,sum);
}
char course[200], keyword[50];
printf("enter the course description:-\n");
gets(course);
printf("enter the keyword to search in course:-\n");
gets(keyword);
if(strstr(course,keyword)!=NULL){
    printf("keyword '%s' found in course description",keyword);
}
else{
    printf("keyword '%s' not found in course description",keyword);
}*/
float a,b,c,D,root1,root2;
printf("enter the coefficients:-");
scanf("%f%f%f",&a,&b,&c);
D = (b*b)- (4*a*c);
if(D>0){
    root1 = (-b + sqrt(D))/(2*a);
    root2 = (-b - sqrt(D))/(2*a);
    printf("the roots are real and distinct\n");
    printf("root1 = %f\n",root1);
    printf("root2 = %f\n",root2);
}
else if(D==0){
    root1 =  -b/(2*a);
    printf("the roots are real and equal\n");
    printf("root1 = root2 = %f\n",root1);

}
else{
    printf("the roots are imaginary\n");
}
 return 0;
}


