#include<stdio.h>
#include<conio.h>

int main()
{
    int a,middle_digit;
    printf("Enter a number is ");
    scanf("%d",&a);
    while(a>=100){
        a=a%100;

    a=a/10;
    middle_digit=a;
    }
    printf("\nThe Middle digit is %d",middle_digit);
    getch();
}
