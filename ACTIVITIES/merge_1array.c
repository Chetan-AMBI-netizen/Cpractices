#include <stdio.h>

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    
    // Calculate the size of both arrays
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int sizeMerged = size1 + size2;

    int merged[sizeMerged];

    // 1. Copy elements of the first array
    for (int i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // 2. Copy elements of the second array
    // We start filling 'merged' from where the first array left off (index size1)
    for (int i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // Print the result
    printf("Merged Array: ");
    for (int i = 0; i < sizeMerged; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
