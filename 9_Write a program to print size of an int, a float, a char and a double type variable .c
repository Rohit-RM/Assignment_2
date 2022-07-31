#include<stdio.h>
int main()
{
    int a,b,c,d;

    a = sizeof(int);
    b = sizeof(float);
    c = sizeof(char);
    d = sizeof(double);

    printf("Size of int is %d\nSize of float is %d\nSize of char is %d\nSize of double is %d",a,b,c,d);

    return 0;
}