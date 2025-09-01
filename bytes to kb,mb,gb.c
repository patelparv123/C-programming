#include<stdio.h>
int main()
{
     float byte,kb,mb,gb;
     printf("Bytes=");
     scanf("%f",&byte);
     kb=byte/1024;
     mb=kb/1024;
     gb=mb/1024;
     printf("KB=%f\n",kb);
     printf("MB=%f\n",mb);
     printf("GB=%f\n",gb);
}