#include<stdio.h>
#include<conio.h>

int main()
{
    int a,last_digit;
    printf("Enter a number is ");
    scanf("%d",&a);
    last_digit=a%10;
    printf("The last digit is %d",last_digit);
    getch();
}
