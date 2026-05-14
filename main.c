# include <stdio.h>
 int main(){
 /*int marks = 98;
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



 }

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
}*/
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
   return 0;
 }
  