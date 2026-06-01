#include <stdio.h>

int main() {
    int n, i, a[32];

    printf("Enter the number to convert: ");
    scanf("%d", &n);

    // Handle the edge case for 0
    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Conversion loop
    for (i = 0; n > 0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }

    printf("Binary: ");

    // Print the remainders in reverse order
    for (i = i - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }

    printf("\n");
    return 0;
}
