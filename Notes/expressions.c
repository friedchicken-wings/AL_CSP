#include <stdio.h>
#include <math.h>

int main(){
    int apples = 10;
    int people = 6;
    int hour = 12;
    int minutes = hour * 60;

    printf("%d, %d, %d\n", apples, people, hour);

    printf("%f\n", (float)apples/people);

    printf("%d hours is %d minutes\n", hour, minutes);

    float pi = 3.1415;
    float liters = 8.3;
    float years = 22.5;
    float cups = liters * 4.22675;
    float root = sqrt(10);


    printf("%f, %.1f, %.2f\n", pi, liters, years);
    printf("%.1f liters is %.1f cups\n", liters, cups);
    printf("%.2f in Fahrenheit is %.2f in Celsius", 70.0, (70.0 -32)*5/9);
    printf("%d\n", (int)round(pi));
 
    printf("%f\n", (int)pow(2.0, 2)); //first number is base number, second number is power of number
    printf("%f\n", root);

    return 0;
}