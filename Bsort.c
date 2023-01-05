
    // Bubble Sort using C

#include<stdio.h>
void main(){
    int a[10],n, i, j;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a[i]);
    }
    a[n];
    //  Sorting using Bubble Sort
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j+1] = a[j];
                a[j] = temp;

            }
        }  
    }
//  Printing the sorted array
    printf("hello");

    printf("The sorted array is... ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}