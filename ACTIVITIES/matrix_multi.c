#include <stdio.h>

int main() {
    int a[10][10], b[10][10], r1, c1, r2, c2, i, j, k, sum;

    printf("Enter Rows/Cols for Matrix 1 & 2: ");
    scanf("%d %d %d %d", &r1, &c1, &r2, &c2);

    if (c1 != r2) return printf("Math error: Cols of A must match Rows of B."), 0;

    printf("Elements for Matrix 1:\n");
    for(i=0; i<r1; i++) for(j=0; j<c1; j++) scanf("%d", &a[i][j]);

    printf("Elements for Matrix 2:\n");
    for(i=0; i<r2; i++) for(j=0; j<c2; j++) scanf("%d", &b[i][j]);

    printf("\nResult:\n");
    for(i=0; i<r1; i++) {       // Row of A
        for(j=0; j<c2; j++) {   // Column of B
            sum = 0;
            for(k=0; k<c1; k++) sum += a[i][k] * b[k][j]; // Multiplication
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}
