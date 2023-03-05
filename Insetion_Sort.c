
//  Insertion Sort using C
#include<stdio.h>
void main(){
    int arr[20], n, i, j, min,temp ;
    printf("Enter the array size: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for (i = 1; i < n; i++) {  
        temp = arr[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= arr[j])  /* Move the elements greater than temp to one position ahead from their current position*/  
        {    
            arr[j+1] = arr[j];     
            j = j-1;    
        }    
        arr[j+1] = temp;    
    }  
    
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
}