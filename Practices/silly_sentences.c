// AL, Silly Sentences
#include <stdio.h>

int main(){
    float noun;
    float adjective;
    float noun2;

    printf("\nTell me a noun.");
    scanf("%f", &noun);

    printf("\nTell me an adjective.");
    scanf("%f", &adjective);

    printf("\nTell me another noun.");
    scanf("%f", &noun2);


    strcat("\nAfter hiding the painting in his %f for two years, he grew %f and tried to sell it to a/an %f in Florence, but was caught.\n", noun, adjective, noun2);

    return 0;
}