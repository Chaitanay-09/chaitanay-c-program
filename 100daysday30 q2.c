#include <stdio.h>
int main() {
    int i,n,pos=0,neg=0,zero=0;
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
         if(arr[i] > 0){
            pos++;
        }
        else if(arr[i] < 0) {
            neg++;
        }
        else {
            zero++;
        }
    }
    printf("\npos nos are: %d\n",pos);
    printf("neg nos are: %d\n",neg);
    printf("zero nos are: %d\n",zero);

    return 0;
}