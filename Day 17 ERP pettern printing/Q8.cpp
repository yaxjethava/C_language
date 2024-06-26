#include <stdio.h>

int main() {
	
    int rows = 5; // Number of rows for the pattern
    int num = 1; // Starting number

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}

