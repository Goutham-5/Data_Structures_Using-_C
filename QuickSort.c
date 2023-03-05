#include <stdio.h>

void quicksort(int arr[40],int low,int high){
    int i,j,pivot,temp;

    if(low<high){
        pivot=low;
        i=low;
        j=high;
        while(i<j){
            while(arr[i]<=arr[pivot]){
                i++;
            }
            while(arr[j]>arr[pivot]){
                j--;
            }
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;

        quicksort(arr,low,j-1);
        quicksort(arr,j+1,high);
    }
}
void main()
{
    int a[10],n,i;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("\nEnter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);

    printf("\nThe sorted array: ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
} 
 