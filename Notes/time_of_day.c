// Al, Time of Day 3
#include <stdio.h>
#include <string.h>

int main(){
    int time;

    printf("\nWhat is the military time for you?");
    scanf("%d", &time);
    if (time <= 11){
        printf("Since it is %d, goodmorning!\n", time);
    }else if (time >=12){
        printf("Since it is %d, good afternoon!\n", time);
    }else (printf("Since it is %d, good evening!", time));
    
    return 0;
}