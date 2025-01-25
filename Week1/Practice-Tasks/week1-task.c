#include <stdio.h>

int  main (void) {
    char name[100];
    float income;
    float expense;

    float savings;

    printf("Enter your Name: ");
    scanf("%s", name);

    printf("\nEnter your Montly Income: ");
    scanf("%f", &income);

    printf("\nEnter your Montly Expense: ");
    scanf("%f", &expense);

    savings= income - expense;

    printf("\n\n\n--- Monthly Financial Summary ---\n");
    printf("Name: %s\n", name);
    printf("Income: %f\n", income);
    printf("Expenses: %f\n", expense);

    if (savings > 0) {
        printf("You are saving money this month!");
    }
    elseif (savings == 0) {
        printf("You have no savings this month!");
    }
    else{
        printf("You have overspent this month!");
    }

    return 0;
}