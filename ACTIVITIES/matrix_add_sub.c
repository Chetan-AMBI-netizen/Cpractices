#include <stdio.h>

int main() {
    int r, c, i, j, a[10][10], b[10][10];

    printf("Rows and Columns: ");
    scanf("%d %d", &r, &c);

    printf("Matrix A:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &a[i][j]);

    printf("Matrix B:\n");
    for(i=0; i<r; i++) for(j=0; j<c; j++) scanf("%d", &b[i][j]);

    printf("\nSum:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }

    printf("\nDifference:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }

    return 0;
}
