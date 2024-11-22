#include <stdio.h>
   int main() {
    int rows[] = {5, 1, 5,1, 1, 1};
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < rows[i]; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

