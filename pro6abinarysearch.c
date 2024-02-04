#include<stdio.h>
int binarysearch(int arr[],int low,int high,int key);
int main()
{
    int n,x,i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&x);
    int result=binarysearch(arr,0,n-1,x);
    if(result==-1)
    {
        printf("Element is not present in the array\n");
    }
    else
    {
        printf("Element is present at the index %d",result);
    }
    return 0;
}
int binarysearch(int arr[],int low,int high,int key)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid>key])
        {
            return binarysearch(arr,low,mid-1,key);
        }
        else
        {
            return binarysearch(arr,mid+1,high,key);
        }
    }
    return -1;
}
