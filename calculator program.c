#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op); 

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    
    if (op == '+') {
        result = num1 + num2;
        printf("Result = %lf\n", result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("Result = %lf\n", result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("Result = %lf\n", result);
    }
    else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result = %lf\n", result);
        } else {
            printf("Error! Division by zero is not allowed.\n");
        }
    }
    else {
        printf("Invalid operator!\n");
    }

    return 0;
}