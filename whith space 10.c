#include <stdio.h>
main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < rows - i - 1; j++) {
            printf("  ");
        }
        for (int j = 1; j <= i + 1; j++) {
            printf("%2d", j);
        }
        for (int j = i; j >= 1; j--) {
            printf("%2d", j);
        }
         printf("\n");
    }
}