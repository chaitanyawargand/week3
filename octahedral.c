#include<stdio.h>
#include<math.h>
int main()
{
    int n,remainder,p=0;
    float oct=0;

    printf("emter the n\n");
    scanf("%d",&n);

   while(n!=0)
   {
    remainder=n%8;
    n=n/8;
    oct= oct + remainder*pow(10,p);
    p++;
   }

   printf("%f",oct);

   return 0;
}