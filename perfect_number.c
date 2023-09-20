#include<stdio.h>
int main()
{
	int n,i,p=0;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1; i<n; i++)
	{
		if(n%i==0)
		{
			p=p+i;
			
		}
		
	}
		if(n==p)
		{
			printf("this is a perfect number");
		}
		else
		{
			printf("this is not a perfect number");
		}
	 
}
