
//  Selection Sort 
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
    for (i = 0; i < (n - 1); i++) {
      min = i;
      for (j = i + 1; j < n; j++) {
         if (arr[min] > arr[j])
            min = j;
      }
      if (min != i) {
         temp = arr[i];
         arr[i] = arr[min];
         arr[min] = temp;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
}