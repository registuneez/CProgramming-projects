#include <stdio.h>

int main() {
    // Write C code here
    printf("\nMini Calculator\n\n");
    float num1;
    float num2;
    int choice;
    
    printf("Enter First Number: ");
    scanf("%f", &num1);
    
    printf("\nEnter Second Number: ");
    scanf("%f", &num2);
    
    printf("\n\nSelect Operation:\n\n");
    
    printf("1. Add\n");
    printf("2. Substract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n\n");
    
    printf("Enter Choice (1/2/3/4): ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        printf("\nResult: %.2f + %.2f = %.2f", num1, num2, num1+num2);
        break;
        
        case 2:
        printf("\nResult: %.2f - %.2f = %.2f", num1, num2, num1-num2);
        break;
        
        case 3:
        printf("\nResult: %.2f x %.2f = %.2f", num1, num2, num1*num2);
        break;
        
        case 4:
        printf("\nResult: %.2f / %.2f = %.2f", num1, num2, num1/num2);
        break;
        
        default:
        printf("\nInvalid Choice. Please! Try again.");
    }
    

    return 0;
}