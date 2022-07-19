#include<stdio.h>
#include<conio.h>

int main()
{
    int number,new_digit;
    printf("Enter a number ");
    scanf("%d",&number);
    printf("\n\nEnter new digit ");
    scanf("%d",&new_digit);
    number=number*10;
    number=number+new_digit;
    printf("\n\nThe change value is %d",number);
    getch();
}
