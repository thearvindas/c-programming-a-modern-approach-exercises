#include <stdio.h>

int main(void) {

    char sentence[100];
    int flag = 0;                   //flag to indicate finding terminal character
    int letter;
    int index = 0;
    char last;

    printf("Enter a sentence: ");

    while (flag != 1) {
        letter = getchar();
        sentence[index] = letter;

        if (sentence[index] == '.' || sentence[index] == '!' || sentence[index] == '?') {
            last = sentence[index];     //stores the final character
            flag = 1;
            break;
        }

        index++;

    }

    printf("Reversal of sentence: ");

    int end = index;  
    int start;  
    int back_index = end - 1;

    while (back_index >= 0) {
        if (sentence[back_index] == ' ') {
            start = back_index + 1;

            for (int i = start; i < end; i++) {
                putchar(sentence[i]);
            }

            end = back_index;
            back_index--;
        }

        else {
            back_index--;
        }
    }

    putchar(last);




    return 0;
}