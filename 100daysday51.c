#include <stdio.h>
int main() {
    
    int n, target, first = -1, last = -1;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            first = i;
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] == target) {
            last = i;
            break;
        }
    }

    printf("%d , %d \n", first, last);

    return 0;
}