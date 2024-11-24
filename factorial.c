#include<stdio.h>
int main()
{
	int i,pro=1,n;
	
	printf("enter the n\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		pro= pro*i;
	}
	printf("the pro is %d",pro);
	
	return 0;
	
	
}
