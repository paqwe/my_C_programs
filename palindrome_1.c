#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];  
    int i,n,c=0;
 	printf("Enter  the string : ");
    scanf("%s",&s);
    n=strlen(s);
    n=n-1;
	for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i])
    	c++;
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
    return 0;
}

