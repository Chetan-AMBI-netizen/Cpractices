#include<stdio.h>
//binary search in c//
int main(){
    int n, books[100], key, low, high, mid, found =0;
    printf("enter no.of books:-\n");
    scanf("%d", &n);

    printf("enter book id in ascending oreder:-\n");
    for(int i=0; i<n; i++){
        scanf("%d", &books[i]);


    }

    printf("enter book id to search:-\n");
    scanf("%d", &key);
    low =0;
    high = n-1;
    while(low <=high){
        mid = (low +high)/2;
        if(books[mid] ==key){
            found =1;
            break;
        }
        else if(books[mid] <key){
            low = mid +1;
        }
        else{
            high = mid -1;
        }

    }
    if(found){
        printf("book is avaiable in at popsition %d", mid);
    }
    else{
        printf("book is not available");
    }
}


