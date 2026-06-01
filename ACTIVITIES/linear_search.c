#include <stdio.h>

int main() {
    int n, search, found = 0;
    int arr[] = {10, 25, 8, 44, 12}; // Example array
    n = 5; // Number of elements

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Number found at index %d\n", i);
            found = 1;
            break; 
        }
    }

    if (found == 0) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
