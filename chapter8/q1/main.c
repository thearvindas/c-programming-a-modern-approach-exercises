#include <stdio.h>

int main(void) {

    long long int n;
    int last_digit;
    int repeated_digits[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n != 0){
        last_digit = n % 10;                    
        repeated_digits[last_digit] = repeated_digits[last_digit] + 1;     
        n = n / 10;                             
    }

    printf("Repeated digits: ");

    for (int i = 0; i < 10; i++) {
        if (repeated_digits[i] >= 2) {
            printf("%2d", i);
        }
    }

    printf("\n");


    return 0;
}