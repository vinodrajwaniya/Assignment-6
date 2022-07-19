#include<stdio.h>
#include<conio.h>

int main()
{
    int a,first_digit;
    printf("Enter a number is ");
    scanf("%d",&a);
    while(a>=10){
    a=a/10;
    first_digit=a;
    }
    printf("\nThe first digit is %d",first_digit);
    getch();
}
