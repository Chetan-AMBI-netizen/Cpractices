#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos = 2;   // The index to insert at
    int val = 99;  // The value to insert

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Place the value and increase size
    arr[pos] = val;
    size++;
    for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);

    return 0;
}
