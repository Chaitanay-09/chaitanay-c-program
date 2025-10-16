#include <stdio.h>
int main() {
    
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;  
            }
        }

        printf("%d", prevGreater);
        if(i < n - 1){
            printf(", ");
        } 
    }

    return 0;
}