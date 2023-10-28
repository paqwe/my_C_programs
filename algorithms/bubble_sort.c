//bubble sort using function
#include<stdio.h>
#include<stdbool.h>
void bubble(int[] , int);
void display(int[],int);
int main()
{
    int arr[20]= {6,0,2,4,5},n=5,i;
//    printf("enter the size of array\n");
//    scanf("%d",&n);
//    printf("enter the array elements\n");
//    for(i=0;i<n;i++)
//    {
//    	scanf("%d",&arr[i]);
//
//    }
    bubble(arr,n);
    display(arr,n);
}
void display(int arr[],int n)
{
    printf("array after sorting\n");
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}


void bubble(int A[],int n){

  int i,j,count=0;
  bool swap=false;
  
  for(i=0; i<n-1; i++)
  {
    for(j=0 ; j<n-i-1 ; j++)
    {
        if(A[j] > A[j+1])
        {
            int temp = A[j];
            A[j] = A[j+1];
            A[j+1] = temp;
            count=count+1;
            swap = true;
        }
    }
    if (swap == false) {
    	break;
	}
    swap = false;
    printf("Outer loop interation: %d\n",i);
  }
	printf("%d\n",count);
}

