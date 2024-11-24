#include<stdio.h>
int main()
{
    int n,i,rem,rev=0,a,b;

    printf("enter the n\n");
    scanf("%d",&n);
    a=n%10;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10 + rem;
        n=n/10;
    }

    b=rev%10;
    printf("%d",a+b);

    return 0;
}