#include<stdio.h>
#include<conio.h>

int main()
{
    int n,k;
    printf("Enter an number ");
    scanf("%d",&n);
    k=n;
    while(n>=10){
        n=n%10;
    }
    k=k-n;
    printf("\nThe value is %d",k);
    getch();
}
