#include<stdio.h>
int main(){
    char fn[20], ln[20], full[40];
    int i=0, j=0, len =0;
    printf("enter first name:-\n");
    scanf("%s",fn);
    printf("enter last name:-\n");
    scanf("%s",ln);
     while(fn[i] != '\0'){
        full[len++] = fn[i++];
     }
     full[len++] = ' ' ;
     while(ln[j] != '\0'){
        full[len++] = ln[j++];
     }
    full[len] = '\0';
    printf("full name  is:- %s\n", full);
    printf("length of full name is:- %d\n", len);
    return 0;
}