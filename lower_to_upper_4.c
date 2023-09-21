#include<stdio.h>
#include<ctype.h>
int main()
{
	char n[50];
	int i;
	printf("enter a small letter string: ");
	scanf("%s",&n);
	for(i=0; i<=sizeof(n); i++)
	{
		if(n[i]>=65 && n[i]<=90)
		{
			n[i]=n[i]+32;
		}
		else if(n[i]>=97 && n[i]<=122)
		{
			n[i]=n[i]-32;
		}
	}
	printf("%s",n);
}

