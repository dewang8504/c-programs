#include<stdio.h>

int main()
{
    int num,r=0,sum=0,num2;
    printf("enter the number\n");
    scanf("%d",&num);
num2=num;
    while (num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }

    if (num2==sum)
    {
        printf("number is palindrome\n");
    }
    else
    {
        printf("number is not palindrome\n");
    }
    
    return 0;
}