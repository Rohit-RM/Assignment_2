#include<stdio.h>
int main()
{
    int a = 2 , b = 4;
    
    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a is %d and value of b is %d",a,b);

    return  0;
}