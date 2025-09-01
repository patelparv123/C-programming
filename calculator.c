#include<stdio.h>
int main()
{
    float x,y,a,s,m,d;
    printf("Enter the value of x=");
    scanf("%f",&x);
    printf("Enter the value of y=");
    scanf("%f",&y);
    a=x+y;
    s=x-y;
    m=x*y;
    d=x/y;
    printf("Addition of two number =%f\n",a);
    printf("Substact of two number =%f\n",s);
    printf("Multiply of two number =%f\n",m);
    printf("Divide of two number =%f",d);
    
}