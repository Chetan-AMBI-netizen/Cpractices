#include<stdio.h>
// STRINGS in c//
int main(){
    //char name[100];
    //printf("enter your name:-\n");
    //scanf("%s", name);//
    //fgets(name,sizeof(name),stdin);// entire full name like "chetan kumar" can be taken as input//
    //printf("your name is:-%s\n",name);



    char name1[100] = {'c','h','e','t','A','N','\0'};
    char name2[100] ;
    char name3[100] = "chetan kumar";
    name1[4] = 'a'; //modifying the string//
    for(int i=0; name1[i] != '\0'; i++){
        printf("%c\n",name1[i]);

    }
    puts(name1);//direcctly print the string//
     printf("concatenated string is:- %s\n",strcat(name1,name3));//concatenation of two strings//


    printf("the length of the name1 is:- %d\n",strlen(name1));
    printf("the copy of the name2 is:- %s\n",strcpy(name2,name1));
    printf("the length of the name2 is:- %d\n",strlen(name2));
    
     printf("the name is:-%s\n",name1);

    printf("the name is:-%c",name1[3]);
     return 0;
}
