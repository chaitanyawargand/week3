#include<stdio.h>
#include<math.h>
int main()
{
    for(int a=0;a<=10000;a++)
    {
      for(int b=0;b<=10000;b++)
      {
        for(int c=0;c<=100000;c++)
        {
            for(int d=0;d<=10000;d++)
            {
               if((a!=b && a!=c && a!=d)&&
               (b!=a&& b!=c && b!=d)&&
               (c!=a&&c!=b&&c!=d)&&
               (d!=a&&d!=b&&d!=c))
               {
                 if(pow(a,3) + pow(b,3)==pow(c,3)+pow(d,3))
                 printf("%d %d %d %d",a,b,c,d);
               }
               
            }
        }
      }
    }
    return 0;
}