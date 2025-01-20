#include <stdio.h>

int main() {
    // Write C code here
    int stock[] = {10, 50, 30, 15, 25};
    int i;
    int sum=0;
    int avg=0;
    for(i=0; i<5; i++){
        sum=sum+stock[i];
        printf("%d\n", stock[i]);
    }
    avg=sum/5;
    printf("The Sum is: %d\n", sum);
    printf("The Avarage is: %d", avg);

    return 0;
}