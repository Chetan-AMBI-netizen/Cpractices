#include <stdio.h>

// Recursive function to calculate sum
int sum(int n) {
    if (n == 0) {
        return 0; // Base case: sum of 0 is 0
    } else {
        return n + sum(n - 1); // Recursive step
    }
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Sum of first %d natural numbers is: %d\n", n, sum(n));

    return 0;
}

