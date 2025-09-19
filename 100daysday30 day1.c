#include <stdio.h>
int main() {
    int i,n,even=0,odd=0;
    int arr[100];
    printf("enter number of elements in array (max 100): ");
    scanf("%d",&n);
    
    if(n<1 || n>100){
        printf("you have entered wrong no of elements ");
        return 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
         if(arr[i]%2 == 0){
            even++;
        }
        else {
            odd++;
        }
    }
    printf("\neven nos are: %d\n",even);
    printf("odd nos are: %d\n",odd);    

    return 0;
}