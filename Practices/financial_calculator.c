// AL Financial Calculator 3
#include <stdio.h>

int main() {
    float monthly_income, rent, utilities, groceries, transportation, savings, remaining;
    float rentPercent, utilitiesPercent, groceriesPercent, transportationPercent, savingsPercent;
    
    printf("What's your monthly income:? $");
    scanf("%f", &monthly_income);
    printf("What's your monthly rent?: $");
    scanf("%f", &rent);
    printf("What's your monthly utilities?: $");
    scanf("%f", &utilities);
    printf("What's your monthly groceries?: $");
    scanf("%f", &groceries);
    printf("What's your monthly transportation?: $");
    scanf("%f", &transportation);
    
    savings = monthly_income * 0.10;
    remaining = monthly_income - (rent + utilities + groceries + transportation + savings);
    
    rentPercent = (rent / monthly_income) * 100;
    utilitiesPercent = (utilities / monthly_income) * 100;
    groceriesPercent = (groceries / monthly_income) * 100;
    transportationPercent = (transportation / monthly_income) * 100;
    savingsPercent = (savings / monthly_income) * 100;
    
    printf("\nMonthly Summary\n");
    printf("Savings (10%%): $%.2f\n", savings);
    printf("Remaining to spend: $%.2f\n", remaining);

    printf("\nPercent of Income\n");
    printf("Rent: %.2f%%\n", rentPercent);
    printf("Utilities: %.2f%%\n", utilitiesPercent);
    printf("Groceries: %.2f%%\n", groceriesPercent);
    printf("Transportation: %.2f%%\n", transportationPercent);
    printf("Savings: %.2f%%\n", savingsPercent);

    return 0;
}
