#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d %d",&a,&b);

    a = a * 10 + b;

    printf("%d",a);

    return 0;
}