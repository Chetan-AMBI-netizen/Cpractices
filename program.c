#include <stdio.h>
#include<string.h>
#include<math.h>
int main(){
 /*int marks;
 printf("enter your marks:-\n");
 scanf("%d",&marks);
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
}
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

int arr[10] = {1,2,3,4,5,6,7,8,9};
for(int i = 0; i<10; i++){
    printf("%d \n",arr[i]);
}
int a[2][3] = {{10,20,30},{40,50,60}};
printf("%d\n",a[0][1]);

for (int i = 0; i<2; i++){
    for (int j = 0; j<3; j++){
        printf("%d ",a[i][j]);

    }
    printf("\n");
}
char str1[100] = "Hello";
char str2[100] = "world";
char str3[100];
strcpy(str3,str1);
printf("the copy of str1 is:-%s\n",str3);
strcmp(str1,str2);
printf("the length of an first string: %d\n",strlen(str1));
printf("the comparison of str1 and str2 is:_%d\n",strcmp(str1,str2));
strcat(str1,str2);
printf("the concatenation of str1,str2 is:-%s\n",str1);
printf("the   character o is found at in string %s\n",strchr(str1,'o'));
printf("the reverse of str1 is:-%s\n",strrev(str1));
int a[4][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
};
int sum = 0;
for (int i = 0; i<4; i++){  
    for (int j = 0; j<4; j++){
        if(i==j){
            sum = sum + a[i][j];
        }
    }
}
printf("the sum of diagonal elements is: %d\n",sum);

int b[5] = {1,2,3,4,5};
int *p;
p = b;
printf("%u\n",p);

printf("before incrementing pointer:%d\n",*p);
p++;
printf("after incrementing pointer:%d\n",*p);
// array modification//
int arr[5] = {1,2,3,4};
arr[2] = 100;
for(int i= 0; i<5; i++){
    printf("%d\n",arr[i]);

}
int ar[4] = {10,20,};
for (int i = 0; i<=4 ; i++ ){
    scanf(" enter a number:- %d\n",&ar[i]);
}
    for (int i = 0; i<=4; i++){
        printf("%d\n", ar[i]);
    }
// ARRAY operations//
// 1) LInear search//
int A[5] = {100,101,102,103};
int key = 104;

for (int i = 0; i<5; i++){
    
    if(A[i] == key ){
        printf("key found at %d",i);
    }
    else{
        printf("key not found");
    }
}
    

//2D ARRAY MATRIX INPUT//
int Arr[2][3];
for (int i=0; i<2; i++){
    for (int j =0; j<3; j++){
        printf("enter a matrix:-");
        scanf("%d", &Arr[i][j]);
    }
}
for(int i = 0; i<2; i++){
    for(int j =0; j<3; j++){
        printf("%d",Arr[i][j]);
    }

printf("  \n ");
}
*/
// 2D ARRAY MATRIX ADDITION//

int A[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
int B[3][3] = {
    {10,20,30},
    {40,50,60},
    {70,80,90}
};
int C[3][3];
for (int i = 0 ; i<3; i++){
    for(int j=0; j<3; j++){
        C[i][j] = A[i][j] + B[i][j];
    }
}
for (int i = 0; i<3; i++){
    for (int j = 0; j<3; j++){
        printf(" %d ",C[i][j]);
    }


printf(" \n ");
}   



return 0;
}


