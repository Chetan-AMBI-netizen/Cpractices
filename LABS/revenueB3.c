#include<stdio.h>
int main(){
    int branch, products, units[10][1], revenue[10], total;
    printf("enter branches and products:-\n");
    scanf("%d%d", &branch, &products);
    printf("enter units sold for each product in each branch:-\n");
    for (int i=0; i<branch; i++){
        for (int j=0; j<products; j++){
            scanf("%d", &units[i][j]);

        }
    }
    printf("enter revenue per unit for each product:-\n");
    for(int i=0; i<products; i++){
        scanf("%d", &revenue[i]);

    }
    printf("total revenue for each branch:-\n");
    for(int i=0; i<branch; i++){
        total=0;
        for(int j=0; j<products; j++){
            total = total + units[i][j] * revenue[j];
        }
        printf("Branch %d: %d\n", i+1, total);
    }
 return 0;
}