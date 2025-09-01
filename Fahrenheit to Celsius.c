#include<stdio.h>
int main()
{
     float c=0f;
     float f;
     printf("Temperature in Fehrenheit=");
     scanf("%f",&f);
     c=(5/9)*(f-32);
     printf("Temperature in celcius=%f",c);
}