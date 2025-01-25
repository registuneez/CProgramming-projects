#include <stdio.h>

int  main (void) {
    int var1;
    float var2;
    char var3;
    printf("enter an integer: ");
    scanf("%d", &var1);

    printf("\nenter a float: ");
    scanf("%f", &var2);

    printf("\nenter an character: ");
    scanf("%c", &var3);


    printf("\n\n\n--- You Entered ---\n");

    printf("Integer: %d\nFloat: %f\nChracter: %c", var1, var2, var3);
    return 0;
}