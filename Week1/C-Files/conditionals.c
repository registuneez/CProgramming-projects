#include <stdio.h>

int  main (void) {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\n\n")
    if (age >= 18) {
        printf("You are %d old. You are allowed to log in.\n");
    }
    elseif (age <= 0) {
        printf("You are %d old. It seems you are not yet born.\n");
    }
    else {
        printf("You are %d old. You are not allowed to log in.\n");
    }
    
    return 0;
}