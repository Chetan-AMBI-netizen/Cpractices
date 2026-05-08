
#include <stdio.h>
#include <string.h>
 int main(){
        char items[50] = "";
        float price = 0.0f;
        int quantity = 0;
        char currency = '$';
         float total =  0.0f;
        printf("which item do you want to buy?:\n");
        fgets(items,sizeof(items),stdin);
        printf("price for each item?:\n");
        scanf("%f",&price);
        printf("how many items do you want to buy?:\n");
        scanf("%d", &quantity);
        total = price * quantity;
        printf("you have buyed %d %s's'",quantity,items);

        printf( " the total price is :- %C %.2f",currency,total);






    return 0 ;
}
