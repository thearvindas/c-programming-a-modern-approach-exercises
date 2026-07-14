#include <stdio.h>
#include <ctype.h>

int main(void) {

    char message[160];
    int i = 0;
    int character;

    printf("Enter message: ");

    while ((character = getchar()) != '\n') {
        message[i] = character;
        i++;
    }

    printf("In B1FF-speak: ");

    for(int n = 0; n < i; n++) {
        message[n] = toupper(message[n]);

        switch(message[n]) {
            case 'A' : printf("4");
                        break;
            case 'B' : printf("8");
                        break;
            case 'E' : printf("3");
                        break;
            case 'I' : printf("1");
                        break;
            case 'O' : printf("0");
                        break;
            case 'S' : printf("5");
                        break;
            default  : printf("%c", message[n]);
        }
        
    }

    printf("!!!!!!!!!!\n");


    return 0;
}