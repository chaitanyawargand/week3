#include<stdio.h>
int main()
{
	int i,n;
	
	printf("enter the n\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d*%d=%d\n",i,n,i*n);
	}
	return 0;
}
