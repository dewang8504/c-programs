#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,c,a=0,b=1;
    printf("enter the limit\n");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    
    
    return 0;
}
