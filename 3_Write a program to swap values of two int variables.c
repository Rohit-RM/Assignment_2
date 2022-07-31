#include<stdio.h>
int main()
{
    int a = 1,b = 2,c = 0;

    c = a;
    a = b;
    b = c;

    printf("value of a is %d and value of b is %d",a,b);

    return 0;
}