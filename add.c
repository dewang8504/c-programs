#include<stdio.h>

int main()
{
    int num,m,r,c,sum=0;
    printf("enter the number\n");
    scanf("%d",&num);
    m=num;
    while (num>0)
    {
        r=num%10;
        c=r*r*r;
        sum=sum+c;
        num=num/10;

    }
    num=m;

    if (num==sum)
    {
        printf("number is armstrong\n");
    }
    else
    {
        printf("number is not armstrong\n");
    }
    
    
    return 0;
}
