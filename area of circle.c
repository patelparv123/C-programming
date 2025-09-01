#include <stdio.h>
int main() 
{
    double radius = 0.0;
    double area = 0.0;

    printf("Enter radius length: ");
    scanf("%lf", &radius);

    area = radius * radius * (22.0 / 7.0);

    printf("Area of circle is %.3lf\n", area);
    
    return 0;
}