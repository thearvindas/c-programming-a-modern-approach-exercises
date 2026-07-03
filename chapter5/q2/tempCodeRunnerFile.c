#include <stdio.h>

int main(void) {

    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &min);

    if (hour < 12) {
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour, min);
    }

    else if (hour == 12){
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour, min);
    }

    else {
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour - 12, min);
    }


    return 0;
}