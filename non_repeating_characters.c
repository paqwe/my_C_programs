#include<stdio.h>
int main()
{
	char s[50];
	int i,j;
	printf("enter :");
	scanf("%s",&s);
	for(i=0;i<=sizeof(s);i++)
	{
		for(j=i+1;j<=sizeof(s);j++)
		{
			if(i==j)
			continue;
			else
			{
				printf("%s",s);
			}
		}
	}
}

