#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,p=0;
    float sum=0;


    printf("enter the n\n");
    scanf("%d",&n);

    while(n!=0)
    {
       rem= n%10;
       sum =sum + rem*pow(2,p);
       p++;
       n=n/10;
    }

    printf("%f",sum);
    return 0;
}