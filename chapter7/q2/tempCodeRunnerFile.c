#include <stdio.h>

int main(void) {

    int n;
    char check = 'a';
    printf("Enter number of entries: ");
    scanf("%d", &n);

    while (getchar() != '\n');

    for (int i = 1; i <= n; i++) {
        if (i % 24 == 0) {
            printf("Press Enter to continue...\n");

            while (check != '\n') {
               check = getchar();
            
            }
        }
        printf("%10d%10d\n", i, i * i);
    }

    return 0;
}