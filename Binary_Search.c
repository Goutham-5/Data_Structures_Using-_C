
//      Program to implement Binary Search in C

#include<stdio.h>
void main(){
    int arr[10], low, high, mid, n, i, key, index = -1; //Index is set to -1 incase the element is not present in the given array

    printf("Enter the array size: ");
    scanf("%d",&n);

    printf("Enter the array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d",&key);
    
    low = 0;
    high = n-1;
    while (low <= high)
    {
        mid = (low + high)/2;
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            index  = mid ;
            break;
        }
    }

    if (index == -1)
    {
        printf("Element not found...");
    }
    else
    {
        printf("Element found at index %d ", index);
    }
}
