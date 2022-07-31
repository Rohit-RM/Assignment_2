#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);

    int x,y;

    x = a % 10;
    y = a / 10;

    a = x * 100 + y;

    printf("%d",a);

    return 0;
}