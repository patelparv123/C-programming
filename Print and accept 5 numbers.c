#include <stdio.h>

int main() {
    int i,a[5];

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("The numbers you entered are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
