#include<stdio.h>
int main()
{
	int nums[] = {2,7,11,15};
	int target=9,i,j,n;
	n=sizeof(nums)/sizeof(nums[0]);
//	printf("%d",n);
	for(i=0;i<n;i++)
	{
		for(j=i+1; j<=n;j++)
		{
			if(nums[i]+nums[j]==target)
			{
				printf("%d %d",i,j);
			}
		}
	}
	return 0;
}
