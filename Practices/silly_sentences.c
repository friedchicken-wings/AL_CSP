// AL, Silly Sentences
#include <stdio.h>
#include <string.h>

int main(){
    char noun[50];
    char adjective[50];
    char noun2[50];

    char sentence[300];
    sentence[0] = '\0';

    printf("\nTell me a place.");
    scanf("%49s", &noun);

    printf("\nTell me an adjective.");
    scanf("%49s", &adjective);

    printf("\nGive me a name.");
    scanf("%49s", &noun2);

    strcat(sentence, "\nAfter hiding the painting in his ");
    strcat(sentence, noun);
    strcat(sentence, "\nfor two years, it grew ");
    strcat(sentence, adjective);
    strcat(sentence, "\nand tried to sell it to a/an ");
    strcat(sentence, noun2);
    strcat(sentence, "\nin Florence, but was caught.");
    
    printf("\n%s\n", sentence);
    
    return 0;
}
