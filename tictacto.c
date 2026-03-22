// GC NP AL 3rd period team game in c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

int main (){
     srand(time(NULL));
    char name [50];
    char yesorno [50];
    printf("What is your name?:\n");
    scanf("%s", name);
    printf("Hello, %s do you wish to play tic tac toe?\n", name);
    scanf("%s", yesorno);
        if (strcmp(yesorno, "yes") == 0 || strcmp(yesorno, "Yes") == 0){
            printf("Welcome to tic tac toe\n");
        }else{
            printf("You still must play\n");
        };
char spts[9] = {'0','1','2','3','4','5','6','7','8'};

while (true){
        printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
        printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
        printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);
   
    while(true){
      int myNum;
        printf("Select a board spot 0-8:\n");
     scanf("%d", &myNum);

     if(myNum < 0 || myNum > 8){
        printf("Invalid spot\n");
        continue;
     }

     if(spts[myNum] == 'X' || spts[myNum] == 'O'){
        printf("That spot is taken\n");
     }else{
        spts[myNum] = 'X';
        break;
     }

    }
   
    printf ("\n");
    printf("Players' Turn\n");
    printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
    printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
    printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);

    // player win conditions
    if (spts[0]==spts[1] && spts[1] == spts[2] && spts[0]=='X'){
        printf("\nYou win!");
        return 0;
    }
    if(spts[3]==spts[4] && spts[4] == spts[5] && spts[3]=='X'){
        printf("\nYou win!");
        return 0;
    }
    if(spts[6]==spts[7] && spts[7]==spts[8] && spts[6]=='X'){
        printf("\nYou win!");
        return 0;
    }
    if(spts[0]==spts[4] && spts[4]==spts[8] && spts[0]=='X'){
        printf("\nYou win!");
        return 0;
    }
    if(spts[2]==spts[4] && spts[4]==spts[6] && spts[2]=='X'){
        printf("\nYou win!");
        return 0;
    }

    if(spts[0]==spts[3] && spts[3]==spts[6] && spts[0]=='X'){
        printf("\nYou win!");
        return 0;
    }
    if(spts[1]==spts[4] && spts[4]==spts[7] && spts[1]=='X'){
        printf("\nYou win!");
        return 0;
    }
    if(spts[2]==spts[5] && spts[5]==spts[8] && spts[2]=='X'){
        printf("\nYou win!");
        return 0;
    }
    // Bots turn
    int bot = rand() % 9;

    while (spts[bot] == 'X' || spts[bot] == 'O') {
        bot = rand() % 9;
            }
spts[bot] = 'O';

printf("Bot chose %d\n", bot);

printf(" %c | %c | %c \n", spts[0], spts[1], spts[2]);
printf(" %c | %c | %c \n", spts[3], spts[4], spts[5]);
printf(" %c | %c | %c \n", spts[6], spts[7], spts[8]);

    if (spts[0]==spts[1] && spts[1] == spts[2] && spts[0]=='O'){
        printf("The bot won\n");
        return 0;
    }
    if(spts[3]==spts[4] && spts[4] == spts[5] && spts[3]=='O'){
        printf("The bot won\n");
        return 0;
    }
    if(spts[6]==spts[7] && spts[7]==spts[8] && spts[6]=='O'){
        printf("The bot won\n");
        return 0;
    }

    if(spts[0]==spts[4] && spts[4]==spts[8] && spts[0]=='O'){
        printf("The bot won\n");
        return 0;
    }
    if(spts[2]==spts[4] && spts[4]==spts[6] && spts[2]=='O'){
        printf("The bot won\n");
        return 0;
    }

    if( spts[0]==spts[3]&&spts[6] == spts[3] && spts[0]=='O'){
        printf("The bot won\n");
        return 0;
    }
    if(spts[1]==spts[4]&& spts[7] == spts[4] && spts[1]=='O'){
        printf("The bot won\n");
        return 0;
    }
    if(spts[2]==spts[5]&& spts[8] ==spts[5] && spts[2]=='O'){
        printf("The bot won\n");
        return 0;
    }
}

return 0;
}
