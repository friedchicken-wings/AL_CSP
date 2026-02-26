// AL Conditionals
#include <stdio.h>
#include <string.h>

int main(){
    int grade = 97;

    if (grade >= 90){
        if (grade > 93){}
        printf("You have a %d percent. That is an A!\n", grade);
    }else{
        printf("You have a %d percent. That is an A-!\n", grade);
    }
    }else if (grade >= 80){
        printf("You have a %d percent. That is a B!\n", grade);
    }else if (grade >= 70){
        printf("You have a %d percent. That is a C.\n", grade);
    }else if (grade >= 60){
        printf("You ahve a %d percent. That is a D.\n", grade);
    }else{
        printf("Oh no! You have a %d percent, that is failing!\n", grade);
    };

    int num = 4;

    if (num%2 == 0 && (num <10 && num > -10)){
        printf("%d is a single digit even number.\n", num);
    }else if (num%2 != 0 && (num <10 && num > -10)){
        printf("%d is a single digit odd number!\n", num);
    }else{
        printf("%d is not a single digit number!\n", num);
    }

    char name[] = "Eric";

    if(strcmp(name, "Cora") == 0){
        printf("Welcome Admin!\n");
    }else{
        printf("Hello %s\n", name);
    }
        
    return 0;
}