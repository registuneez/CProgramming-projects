#include <stdio.h>

int  main (void) {
    int num1= 10;
    int num2= 5;
    int sum, product, subs, div;
    sum = num1 + num2;
    product = num1 * num2;
    subs = num1 - num2;
    div = num1 / num2;
    printf("Addition: %d\n", sum);
    printf("Substraction: %d\n", subs);
    printf("Multiplication: %d\n", product);
    printf("Division: %d\n", div);

    return 0;
}