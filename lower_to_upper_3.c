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
		n[i]=n[i]-32;
	}
	printf("%s",n);
}

