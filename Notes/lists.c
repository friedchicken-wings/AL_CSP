// AL, Lists
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
// array = list
int main(){
    // Example 1
    int grades[] = {74, 88, 95, 87, 98};
    printf("%d\n", grades[2]);

    // Example 2
    float sizes[] = {3.57, 24.95, 36.1, 5.99};
    // change an item in a list
    printf("%.2f\n", sizes[0]);
    sizes[0] = 10.45;
    printf("%.2f\n", sizes[0]);

    // Example 3
    char names[][20] = {"Alex", "Katie", "Andrew", "Vienna", "Tia", "Treyson", "Xavier", "Jake"}; // First bracket is for number of items in the array, second braket is for number of letters allowed in each string

    printf("%s\n", names[5]);

    // For Loop Example 1
    for(int i = 20; i >= 0; i--){
        printf("%d ", i);
    }

    // For Loop Example 2
    srand(time(NULL));
    int guess = 0;

    for(int num = rand() %20 + 1; num != guess; num = num){
        printf("\nGuess a number between 1 and 20: ");
        scanf("%d", &guess );
        if (guess == num){
            printf("You won!\n");
            break; //gets you out of the loop
        }else if (guess < num){
            printf("Your guess is too low\n");
        }else{
            printf("Your guess is too high\n");
        }
    }
    printf("Game over!\n");

    // For Loop Example 3
    int length = sizeof(names)/ sizeof(names[0]);

    for(int x = 0; x < length; x++){
        printf("%s LaRose\n", names[x]);
    }

    return 0;
}