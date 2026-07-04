#include <stdio.h>

int main(void) {

    int num_of_days, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &num_of_days);
    printf("Enter starting day of the week (1 = Sun, 7 = Sat): ");
    scanf("%d", &starting_day);

    //printing the empty spaces before the 1st
    for (int i = 1; i < starting_day; i++) {
        printf("\t");
    }

    for (int i = 1; i <= num_of_days; i++) {
        if ((i + starting_day - 1) % 7 == 0) {
            printf("%d\n", i);
        }
        else {
            printf("%d\t", i);
        }
    }

    printf("\n");
    return 0;
}