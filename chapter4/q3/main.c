#include <stdio.h>

int main(void) {

    int d1, d2, d3;

    printf("Enter a three digit number: ");

    if (scanf("%1d%1d%1d", &d1, &d2, &d3) != 3){
        printf("Not a valid input.\n");
        return 1;
    }
    
    if (d1 == 0) {
        printf("Not a three digit number.\n");
        return 1;
    }

    printf("The reversed number is: %d%d%d\n", d3, d2, d1);
    return 0;
}