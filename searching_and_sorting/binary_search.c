#include<stdio.h>
int main()
{
    int a[]={11,22,33,44,55,66,77,88};
    int n = sizeof(a)/sizeof(int);
    int low=0,mid,high=n-1;
    int key;
    printf("enter element which you want to search : ");
    scanf("%d",&key);
    while(low<=high)  
    {
        mid=low+(high-low)/2;
        if(key==a[mid])
        {
            printf("element found at position %d",mid+1);
            break;
        }
        else if(a[mid]>key)
            high = mid-1;
        else
            low=mid+1;
    }
    if(low>high)
    {
        printf("not found");
    }

}