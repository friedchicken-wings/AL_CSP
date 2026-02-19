// This is a comment in C
#include <stdio.h> // lets us create inputs and outputs


int main(){
    int number = 12;
    float pi = 3.14;
    char name[] = "Xavier";
    char person[50];
    int age;

    printf("Tell me how old you are\n");
    scanf("%s", &person);

    printf("Name is $s and age is %d\n", person, age);
    printf("We have the number %d/n", number); // \n tells the computer to move to the next line
    printf("%f\n", pi);
    printf("%s is %d years old\n", name, age); // \n tells computer to start a new line or move in to next
    return 0; // always last line of main
}

