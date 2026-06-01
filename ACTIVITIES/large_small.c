#include <stdio.h>

int main() {
    int arr[] = {25, 11, 7, 75, 56};
    int n = 5; // Size of the array

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);

    return 0;
}
