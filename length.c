#include<stdio.h>
int main()
{
	int i=1,n;
	
	printf("enter the n\n");
	scanf("%d",&n);
	
	while(n!=0)
	{
		n= n/10;
		i++;
	}
	printf("%d",i);
	return 0; 
	
	}
 
