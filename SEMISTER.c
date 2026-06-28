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
    */
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