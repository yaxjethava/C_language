#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) {
        char Alphabet = 'A' + i - 1; // Calculate the starting character for the row
        
        for (int j = 1; j <= i; j++) {
            printf("%c ", Alphabet - j + 1); // Print characters in decreasing order
        }
        
        printf("\n");
    }

    return 0;
}
