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
    */
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

   