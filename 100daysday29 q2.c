#include <stdio.h>
int main() {
    int i,n,arr[100],max,min;
    printf("enter number of elements of array (max 100): ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nmax number is : %d\n",max);
    printf("min number is : %d\n",min);

    return 0;
}