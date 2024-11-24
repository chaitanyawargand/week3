#include<stdio.h>
int main()
{
	int s=0;
	int a=0,b=1;
	while(1)
	{
		s=a+b;
		b=a;
		s=b;
		printf("%d",s);
		if(s==13)
		break;
		
	}
	
	return 0;
}
