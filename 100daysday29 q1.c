#include <stdio.h>
int main() {
    int i,n,arr[100],sum=0;
    printf("enter number of elements in array max(100): ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("\nsum of elements is : %d\n",sum);

    return 0;
}