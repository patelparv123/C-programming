#include <stdio.h>

int main()
 {
    int num1, num2;
    int largest, smallest;

    printf("Enter two numbers: ");
    scanf("%d %d ", &num1, &num2 );

    if (num1 > num2) {
        printf("largest = %d\n", num1);
        printf("Smallest = %d\n", num2);
    } else if (num2>num1){
         printf("largest = %d\n", num2);
         printf("smallest = %d\n", num1);
    }

    return 0;
}