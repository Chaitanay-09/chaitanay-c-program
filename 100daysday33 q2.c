#include <stdio.h>

int main() {
    int n, i, key, pos;

    scanf("%d", &n);
    int arr[n + 1]; 


    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    scanf("%d", &key);


    for (pos = n - 1; pos >= 0 && arr[pos] > key; pos--) {
        arr[pos + 1] = arr[pos];  
    }
    arr[pos + 1] = key;
    n++; 

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
