#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 2; i <= n; i++) {
        int count = 0;
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;
            }
        }
        if(count == 2) {   // prime numbers have exactly 2 factors: 1 and itself
            printf("%d ", i);
        }
    }

    return 0;
}

