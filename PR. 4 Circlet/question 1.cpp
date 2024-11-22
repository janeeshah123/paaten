#include <stdio.h>
  int main() {
    int i, j, start = 41, rows = 5;
    for (i = 1; i <= rows; i++) {
        for (j = start; j < start + i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

