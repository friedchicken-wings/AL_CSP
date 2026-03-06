// AL, Updated Financial Caltulator 3
#include <stdio.h>

int questions(char* money){
        int monthly; 
       printf("What is your monthly %s?\n", money);
       scanf("%f\n", monthly);
       return monthly;
    } 
int percent(int bill, int income){
    int percent = (bill/income) * 100;
    return percent;
}
int main(){
    char monthly[50];
    char rent[50];
    char utilities[50];
    char groceries[50];
    char transportation[50];

    char total[500];
    total[0] = '\0';

    int income = questions ("income");
    int rent = questions ("rent");
    int utilites = questions ("utilities");
    int groceries = questions ("groceries");
    int transportation = questions ("transportation");
    return 0;
    }
