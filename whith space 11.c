#include <stdio.h>

main() {
    int rows = 5; 
    int i, j;

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" "); 
        }
        for (j = i; j >= 1; j--) {
            printf("* ");
        }
        printf("\n"); 
    }
}