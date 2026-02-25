// AL strings notes
#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "Computer Science Principles ";
    char book[100];
    char teacher[] = "Ms.Larose";
    int num;

    //book[0] = 'T';
    //book[1] = 'h';
    //book[2] = 'e';
    printf("%s", subject);
    printf("Wite a book with a 1 word name: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);

    printf("\nThe book is %s. That is a cool book\n", book);

    //concatenation in C
    char name[] = "Vienna";
    char last[] = "LaRose";
    strcat(name, " ");
    strcat(name, last);

    char full_name[20];
    //strcat(full_name, "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

    //printf("%s/n", full_name);

    printf("%s\n", name);

    //length of string
    printf("%lu", strlen(name));

    return 0;
}