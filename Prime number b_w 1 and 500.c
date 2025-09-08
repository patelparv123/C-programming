#include <stdio.h>

int main() {
    int i, j, count, primeCount = 0;

    printf("Prime numbers between 1 and 500 are:\n");

    for (i = 2; i <= 500; i++) {
        count = 0;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count = 1;   
                break;
            }
        }
        if (count == 0) {
            printf("%d ", i);
            primeCount++;
        }
    }

    printf("\n\nTotal prime numbers between 1 and 500 = %d\n", primeCount);

    return 0;
}