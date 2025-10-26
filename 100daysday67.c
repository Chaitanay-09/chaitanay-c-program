#include <stdio.h>

int main() {
    int m, n;
    

    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums1[m], nums2[n], merged[m+n];

    
    printf("Enter elements of first sorted array: ");
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter elements of second sorted array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0, k = 0;


    while(i < m && j < n) {
        if(nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    
    while(i < m) {
        merged[k++] = nums1[i++];
    }
    while(j < n) {
        merged[k++] = nums2[j++];
    }

    
    for(int x = 0; x < m+n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}
