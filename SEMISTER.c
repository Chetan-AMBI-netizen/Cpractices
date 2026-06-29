#include<stdio.h>
#include<string.h>
/*union employee{
    char name[40];
    int salary;
    int income;
};
int main(){
    union employee e1;
    strcpy(e1.name,"chetan");
    e1.salary = 100000;
    


    printf("%d\n",e1.salary);
    return 0;
}
    
   enum days{
    monday,
    tuesday,
    wednesday
   };
   int main(){
    enum days today;
    today = tuesday;
    printf("%d",today);
    return 0;
   }
    
   enum traficsignal{
    RED,
    YELLOW,
    GREEN
   };
   int main(){
    enum traficsignal signal = RED;
    switch(signal){
        case RED:
        printf("STOP\n");
        break;
        case YELLOW:
        printf("START\n");
        break;
        case GREEN:
        printf("GO\n");
        break;
    }
    return 0;
   }


   void change(int *x){
    *x=100;
    printf("%d\n",*x);
   }
   int main(){
    int a =40;
    change(&a);
    printf("%d",a);
    return 0;
   }
    
   struct book{
    int id;
    char title[29];
    char author[40];
    int year;

   };
   int main(){

    
    struct book b[3];
    for ( int  i=0; i<3; i++){
        printf("enter id\n:");
        scanf("%d",&b[i].id);
        printf("title:\n");
        scanf("%s",b[i].title);
        printf("author:\n");
        scanf("%s",b[i].author);
        printf("year:\n");
        scanf("%d",&b[i].year);
    }
    for(int i=0; i<3; i++){
        printf(" ID :%d\n",b[i].id);
        printf(" TITLE:%s\n",b[i].title);
        printf(" AUTHOR:%s\n",b[i].author);
        printf(" YEAR: %d\n",b[i].year);
    
    }
    return 0;
   }

   
  int add(int x, int y){
    return x+y;
  }
  int main(){
    int a =10;
    int b=20;
    int sum=0;
    sum = add(a,b);
    printf("%d\n",sum);
    return 0;

  }
    
   struct student{
    char name[20];
    int marks;

   };
   int main(){
    struct student s1;
    struct student *ptr;
    ptr = &s1;
    printf("enter your name:-\n");
    scanf("%s",ptr->name);
    printf("enter your marks:-\n");
    scanf("%d",&ptr->marks);

    printf("---student details---\n");
    printf("name:-%s\n",ptr->name);
    printf("marks:-%d\n",ptr->marks);
    return 0;

   }


int main(){

    int arr[] ={1,2,3,4,5};
   int*ptr = arr;
    for(int i=0; i<5; i++){
        printf("%d\n",*(ptr+i));
        

    }
    return 0;
}
    */
  
   void display(int arr[],  int n){
    for (int i=0; i<n; i++){
        printf("%d\n",arr[i]);

    }
   }
   int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    return 0;
   }