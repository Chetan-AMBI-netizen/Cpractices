/*# include <stdio.h>

 

 marks = 98;
 if (marks >= 90 && marks<=100){
    printf("Grade A");
 }
 else if(marks>=80 && marks <= 89){
    printf("Grade B");
 }
 else{
    printf("FAIL");
 }
for (int a =1;a<=10; a++){
   printf("%d\n",a);
}
 int A = 20;
while(A<=30){
   printf("%d\n",A);
   A++;
}
int i = 0;
do{
   printf("hello good midnight Chetan\n");
   i++;

}while(i<5);



 //ARRAYS IN C //
 int arr[5] = {1,2,3,4,5};
  for(int i = 0; i<5; i++){
      printf("%d\n",arr[i]);
  }
int ar[10] = {100,101,102,103,104,105,106,107,108,109};
printf("%d\n",ar[8]);


while(arr[0] ==10){
   printf("hello you are wrong");
   break;
}


{
int m[6];
for (int i =0; i<=5; i++){
   printf("enter your each subject %d marks:-\n",i+1);
   scanf("%d",&m[i]);

}

for (int i = 0; i<=5; i++){

   printf("your subject %d marks is %d\n",i+1,m[i]);

  
}
  float percentage =(m[0]+m[1]+m[2]+m[3]+m[4]+m[5])/6;
   printf("your percentage is %.2f '%%'\n",percentage);
 }
int a[5] ={10,20,30,40,50};
int sum = 0;
for (int i = 0; i<5; i++){
   sum = sum + a[i];
   printf("the sum of the array is %d\n",sum);

}
char name[10] = "Chetan";
printf("the name is:- %s\n",name);

// 2D ARRAY IN C //
int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
printf("the 2d array is:- %d\n",arr[1][2]);
for (int i = 0; i<3; i++){
   for (int j = 0; j<3; j++){
      printf("%d  ",arr[i][j]);
   }
   printf("\n");
}
// SWITCH CASE IN C //
int homes = 0;
printf("enter your home number:-\n");
scanf("%d",&homes);
switch(homes){
   case 1:
   printf(" Home number %d nandi HOME", homes);
   break;
   case 2:

   printf(" Home number %d basava HOME", homes);
   break;

   case 3:
   printf(" Home number %d balaya HOME", homes);
   break;

   default:
   printf("no home is in this area");
}
char homes;
printf("enter your home BLOCK:-\n");
scanf("%c",homes);
switch(homes){
   case 'A':
   printf("home block %c is Nandi HOME",homes);
   break;
   case 'B':
   printf("home block %c is  BASAVA HOME ",homes);
   break;
   case 'C':
   printf("home block %c is BALAYA HOME",homes);
   break;
   default:
   printf("no home block is in this area");

} 
// FUNCTIONS IN C //

// no argument + no return value//
void greeting(){
   printf("hello world\n");
}
int main(){
   greeting();
    return 0;
}
// argument + no return value//

void welcome(char name[],int age,char country[]){
   printf("welcome to INDIA %s\n",name );
   printf("details of the %s\n",name);
   printf("his age is %d\n",age);
   printf("he is from %s\n",country);

}  
int main (){
   char name[20];
   int age;
   char country[10];
   printf("enter the name:-\n");
   scanf("%s",name);
   printf("enter the age:-\n");
   scanf("%d",&age);
   printf("enter the country:-\n");
   scanf("%s",country);

   welcome(name,age,country);
   return 0;
}
   
  //no argument + return value//
  int sum(int a, int b){
   return a+b;


  }
  int main(){
   int result = sum(10,20);
   printf("the sum of 10 and 20 is:- %d",result);
   return 0;
  }
   
  // argument + return value //
float rectanglearea(float length, float breadth);
float circelarea(float radius);  
float squarearea(float side);
int main(){
   
    printf("area of rectangle is %.2f\n",rectanglearea(5.0,3.0));           
    printf("area of circle is %.2f\n",circelarea(4.0));
    printf("area of square is %.2f\n",squarearea(6.0));

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
// temperature check using function //
void check_temperature(float temp){
   if(temp>=45){
      printf("the weather is  very hot\n");
   }
   else if (temp<45 && temp>=30){
      printf("the weather is hot\n");
   }

   else if(temp>= 20 && temp<30){
      printf("the weather is normal\n");

   }
   else if (temp<20){
      printf("the weather is cool\n");
   }
   else{
      printf("the weather is very cold\n");
   }
   }
 int main(){
   float temp;
   printf(" enter the temperature:-\n");
   scanf("%f",&temp);
   check_temperature(temp);
   return 0;
 }
   */
  //STRINGS//
 #include <stdio.h>

int main() {
    int n, books[100], key, low, high, mid, found = 0;

    printf("Enter number of books: ");
    scanf("%d", &n);

    printf("Enter Book IDs in ascending order:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &books[i]);

    printf("Enter Book ID to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(books[mid] == key) {
            found = 1;
            break;
        }
        else if(books[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found)
        printf("Book is available");
    else
        printf("Book is not available");

    return 0;
}