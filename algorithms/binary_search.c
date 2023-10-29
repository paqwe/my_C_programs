#include<stdio.h>
int main()
{
    int arr[20],low,high,mid,n,i,f=0;
    int target;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("enter the target element which you want to search\n");
    scanf("%d",&target);
    low = 0;
    high = n-1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == target)
        {
            printf("element %d found at postion %d",arr[mid],mid+1);
            f=1;
            break;
        }
        if(arr[mid] < target)
        {
             low = mid +1;
        }
        if(arr[mid] > target)
        {
            high = mid - 1;
        }
    }
    if(f == 0)
    printf("target element is not present in the array\n");   
}
