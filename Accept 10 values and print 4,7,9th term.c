#include <stdio.h>

int main() {
    int i,a[10];

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("The 4th ,7th and 9th number are:\n");
        printf("%d %d %d",a[3],a[6],a[8]);

    return 0;
}
