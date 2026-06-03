#include <stdio.h>

// Function to check prime
int Prime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // If divisible by any i, it's not prime
        }
    }
    return 1; // Otherwise, it is prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (Prime(num)) {
        printf("%d is a Prime Number.\n", num);
    } else {
        printf("%d is NOT a Prime Number.\n", num);
    }

    return 0;
}
