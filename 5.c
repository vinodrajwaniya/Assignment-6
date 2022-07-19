#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    printf("\nBefore swap value %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n\nAfter swap value %d %d",a,b);
    getch();
}
