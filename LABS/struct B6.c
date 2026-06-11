#include <stdio.h>

struct Book {
    char title[50], author[50];
    int year;
};

int main() {
    int n, i;
    struct Book b[10];
    printf("Enter number of books: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);

        printf("Title: ");
        scanf(" %s", b[i].title);

        printf("Author: ");
        scanf(" %s", b[i].author);

        printf("Year: ");
        scanf("%d", &b[i].year);
    }

    printf("\nBook Details:\n");
    for(i = 0; i < n; i++)
        printf("\n%s | %s | %d",
               b[i].title, b[i].author, b[i].year);

    return 0;
}

